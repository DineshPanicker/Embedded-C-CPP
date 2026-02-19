# Zephyr CAN Logger (ESP32-S3 + MCP2515 + ST7735R/LVGL)

This project implements a **real-time CAN logger** using **Zephyr RTOS** on an **ESP32-S3 DevKitC**.
It uses:

- **MCP2515** (SPI CAN controller) for CAN bus communication
- **ST7735R** SPI display + **LVGL** for the GUI
- A **USB-to-CAN** adapter on the PC for generating/monitoring CAN traffic

The LCD shows **“Waiting for CAN frames…”** and updates once CAN frames are received.

---

## Prerequisites

- Zephyr workspace already initialized (you are using `~/Embedded-C-CPP/zephyrproject/zephyr`)
- `west` set up and working
- `can-utils` installed for testing on Linux

Install `can-utils` (if needed):
```bash
sudo apt update
sudo apt install -y can-utils
```

---

## Build and Flash (ESP32-S3)

From your Zephyr folder, build and flash the application:

```bash
cd ~/Embedded-C-CPP/zephyrproject/zephyr
west build -b esp32s3_devkitc/esp32s3/procpu -p always ~/Embedded-C-CPP/emm_prj_can
west flash
```

---

## Set up the USB-CAN interface (Linux)

Bring up `can0` at **500 kbit/s**:

```bash
sudo ip link set can0 down
sudo ip link set can0 type can bitrate 500000
sudo ip link set can0 up

ip -details link show can0
```

---

## Testing

### Listener (Terminal 1)

```bash
candump can0
```

### Sender (Terminal 2)

```bash
cansend can0 123#DEADBEEF00112233
cansend can0 321#0102030405060708
```

**Expected:**
- `candump` shows the frames on the PC
- ESP32 receives frames via MCP2515
- LCD updates from “Waiting for CAN frames…” to the latest received frame(s)

---

## Serial Output (optional)

To view ESP32 logs over UART:

```bash
sudo minicom -D /dev/ttyACM0 -b 115200
```

Exit minicom:
- `Ctrl+A` then `X`

---

## Notes / Troubleshooting

- Ensure CAN wiring is correct: **CANH↔CANH**, **CANL↔CANL**, and connect **GND** between USB-CAN and your ESP/MCP2515 setup.
- CAN bus typically needs proper termination (often 120Ω at each end; ~60Ω across CANH/CANL when powered off).
- If the LCD is blank, verify **BLK/backlight** is powered (often tie BLK to 3.3V).

---

## Project Layout (typical)

```
emm_prj_can/
  CMakeLists.txt
  prj.conf
  boards/
    esp32s3_devkitc_procpu.overlay
  src/
    main.c
  README.md
```
