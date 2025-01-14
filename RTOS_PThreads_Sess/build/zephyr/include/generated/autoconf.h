#define CONFIG_NET_L2_ETHERNET 1
#define CONFIG_NET_IPV6 1
#define CONFIG_BUILD_OUTPUT_EXE 1
#define CONFIG_BOARD "native_posix"
#define CONFIG_ETH_NATIVE_POSIX 1
#define CONFIG_FAKE_ENTROPY_NATIVE_POSIX 1
#define CONFIG_NATIVE_POSIX_CONSOLE 1
#define CONFIG_SOC "inf_clock"
#define CONFIG_ZEPHYR_CANOPENNODE_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_ZEPHYR_HAL_NXP_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LZ4_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_MBEDTLS 1
#define CONFIG_MBEDTLS_BUILTIN 1
#define CONFIG_MBEDTLS_CFG_FILE "config-tls-generic.h"
#define CONFIG_MBEDTLS_TLS_VERSION_1_2 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA_ENABLED 1
#define CONFIG_MBEDTLS_CIPHER_AES_ENABLED 1
#define CONFIG_MBEDTLS_AES_ROM_TABLES 1
#define CONFIG_MBEDTLS_CIPHER_DES_ENABLED 1
#define CONFIG_MBEDTLS_CIPHER_MODE_CBC_ENABLED 1
#define CONFIG_MBEDTLS_MAC_MD5_ENABLED 1
#define CONFIG_MBEDTLS_MAC_SHA1_ENABLED 1
#define CONFIG_MBEDTLS_MAC_SHA256_ENABLED 1
#define CONFIG_MBEDTLS_SHA256_SMALLER 1
#define CONFIG_MBEDTLS_CTR_DRBG_ENABLED 1
#define CONFIG_MBEDTLS_CIPHER 1
#define CONFIG_MBEDTLS_MD 1
#define CONFIG_MBEDTLS_HAVE_ASM 1
#define CONFIG_MBEDTLS_SSL_MAX_CONTENT_LEN 1500
#define CONFIG_APP_LINK_WITH_MBEDTLS 1
#define CONFIG_ZEPHYR_NANOPB_MODULE 1
#define CONFIG_ZEPHYR_SOF_MODULE 1
#define CONFIG_ZEPHYR_TFLITE_MICRO_MODULE 1
#define CONFIG_ZEPHYR_TRACERECORDER_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_BOARD_NATIVE_POSIX_32BIT 1
#define CONFIG_BOARD_NATIVE_POSIX 1
#define CONFIG_NATIVE_POSIX_SLOWDOWN_TO_REAL_TIME 1
#define CONFIG_SOC_POSIX 1
#define CONFIG_ARCH "posix"
#define CONFIG_ARCH_POSIX_RECOMMENDED_STACK_SIZE 24
#define CONFIG_ARCH_POSIX 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_SRAM_SIZE 0
#define CONFIG_SRAM_BASE_ADDRESS 0x0
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 256
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_ERRNO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_DEVICE_HANDLE_PADDING 0
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_NUM_PIPE_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 100
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 1000000
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_STACK_POINTER_RANDOM 0
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_HAS_DTS 1
#define CONFIG_CONSOLE 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_NATIVE_POSIX_STDOUT_CONSOLE 1
#define CONFIG_NATIVE_POSIX_CONSOLE_INIT_PRIORITY 99
#define CONFIG_ETHERNET_LOG_LEVEL 0
#define CONFIG_ETH_INIT_PRIORITY 80
#define CONFIG_ETH_NATIVE_POSIX_INTERFACE_COUNT 1
#define CONFIG_ETH_NATIVE_POSIX_DRV_NAME "zeth"
#define CONFIG_ETH_NATIVE_POSIX_DEV_NAME "/dev/net/tun"
#define CONFIG_ETH_NATIVE_POSIX_RANDOM_MAC 1
#define CONFIG_PHY_LOG_LEVEL 0
#define CONFIG_PHY_INIT_PRIORITY 70
#define CONFIG_PHY_AUTONEG_TIMEOUT_MS 4000
#define CONFIG_PHY_MONITOR_PERIOD 500
#define CONFIG_NATIVE_POSIX_TIMER 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_ENTROPY_GENERATOR 1
#define CONFIG_ENTROPY_HAS_DRIVER 1
#define CONFIG_SUPPORT_MINIMAL_LIBC 1
#define CONFIG_EXTERNAL_LIBC 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_N_SPECIFIER 1
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_NET_BUF 1
#define CONFIG_NET_BUF_USER_DATA_SIZE 4
#define CONFIG_NETWORKING 1
#define CONFIG_NET_L2_ETHERNET_LOG_LEVEL 0
#define CONFIG_NET_NATIVE 1
#define CONFIG_NET_NATIVE_IPV6 1
#define CONFIG_NET_NATIVE_TCP 1
#define CONFIG_NET_NATIVE_UDP 1
#define CONFIG_NET_INIT_PRIO 90
#define CONFIG_NET_IF_MAX_IPV6_COUNT 1
#define CONFIG_NET_IF_UNICAST_IPV6_ADDR_COUNT 2
#define CONFIG_NET_IF_MCAST_IPV6_ADDR_COUNT 3
#define CONFIG_NET_IF_IPV6_PREFIX_COUNT 2
#define CONFIG_NET_INITIAL_HOP_LIMIT 64
#define CONFIG_NET_IPV6_MAX_NEIGHBORS 8
#define CONFIG_NET_IPV6_MLD 1
#define CONFIG_NET_IPV6_NBR_CACHE 1
#define CONFIG_NET_IPV6_ND 1
#define CONFIG_NET_IPV6_DAD 1
#define CONFIG_NET_IPV6_RA_RDNSS 1
#define CONFIG_NET_IPV6_LOG_LEVEL 0
#define CONFIG_NET_ICMPV6_LOG_LEVEL 0
#define CONFIG_NET_IPV6_NBR_CACHE_LOG_LEVEL 0
#define CONFIG_NET_TC_TX_COUNT 0
#define CONFIG_NET_TC_RX_COUNT 1
#define CONFIG_NET_TC_THREAD_COOPERATIVE 1
#define CONFIG_NET_TC_NUM_PRIORITIES 16
#define CONFIG_NET_TC_MAPPING_STRICT 1
#define CONFIG_NET_TX_DEFAULT_PRIORITY 1
#define CONFIG_NET_RX_DEFAULT_PRIORITY 0
#define CONFIG_NET_IP_ADDR_CHECK 1
#define CONFIG_NET_MAX_ROUTERS 1
#define CONFIG_NET_ROUTE 1
#define CONFIG_NET_MAX_ROUTES 8
#define CONFIG_NET_MAX_NEXTHOPS 8
#define CONFIG_NET_TCP 1
#define CONFIG_NET_TCP_CHECKSUM 1
#define CONFIG_NET_TCP_LOG_LEVEL 0
#define CONFIG_NET_TCP_BACKLOG_SIZE 1
#define CONFIG_NET_TCP_TIME_WAIT_DELAY 250
#define CONFIG_NET_TCP_ACK_TIMEOUT 1000
#define CONFIG_NET_TCP_INIT_RETRANSMISSION_TIMEOUT 200
#define CONFIG_NET_TCP_RETRY_COUNT 9
#define CONFIG_NET_TCP_MAX_SEND_WINDOW_SIZE 0
#define CONFIG_NET_TCP_RECV_QUEUE_TIMEOUT 100
#define CONFIG_NET_TCP_WORKQ_STACK_SIZE 1024
#define CONFIG_NET_TCP_ISN_RFC6528 1
#define CONFIG_NET_TCP2 1
#define CONFIG_NET_UDP 1
#define CONFIG_NET_UDP_CHECKSUM 1
#define CONFIG_NET_UDP_LOG_LEVEL 0
#define CONFIG_NET_MAX_CONN 4
#define CONFIG_NET_MAX_CONTEXTS 6
#define CONFIG_NET_CONTEXT_SYNC_RECV 1
#define CONFIG_NET_CONTEXT_CHECK 1
#define CONFIG_NET_PKT_RX_COUNT 14
#define CONFIG_NET_PKT_TX_COUNT 14
#define CONFIG_NET_BUF_RX_COUNT 36
#define CONFIG_NET_BUF_TX_COUNT 36
#define CONFIG_NET_BUF_FIXED_DATA_SIZE 1
#define CONFIG_NET_BUF_DATA_SIZE 128
#define CONFIG_NET_DEFAULT_IF_FIRST 1
#define CONFIG_NET_TX_STACK_SIZE 1200
#define CONFIG_NET_RX_STACK_SIZE 1500
#define CONFIG_NET_PKT_LOG_LEVEL 0
#define CONFIG_NET_DEBUG_NET_PKT_EXTERNALS 0
#define CONFIG_NET_CORE_LOG_LEVEL 0
#define CONFIG_NET_IF_LOG_LEVEL 0
#define CONFIG_NET_TC_LOG_LEVEL 0
#define CONFIG_NET_UTILS_LOG_LEVEL 0
#define CONFIG_NET_CONTEXT_LOG_LEVEL 0
#define CONFIG_NET_CONN_LOG_LEVEL 0
#define CONFIG_NET_ROUTE_LOG_LEVEL 0
#define CONFIG_NET_HTTP_LOG_LEVEL 0
#define CONFIG_NET_CONFIG_AUTO_INIT 1
#define CONFIG_NET_CONFIG_INIT_PRIO 95
#define CONFIG_NET_CONFIG_INIT_TIMEOUT 30
#define CONFIG_NET_CONFIG_LOG_LEVEL 0
#define CONFIG_ENTROPY_DEVICE_RANDOM_GENERATOR 1
#define CONFIG_CSPRING_ENABLED 1
#define CONFIG_HARDWARE_DEVICE_CS_GENERATOR 1
#define CONFIG_TEST_EXTRA_STACKSIZE 0
#define CONFIG_HAS_COVERAGE_SUPPORT 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_NATIVE_APPLICATION 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_DISASSEMBLY 1
#define CONFIG_COMPAT_INCLUDES 1
