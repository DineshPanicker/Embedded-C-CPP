import json
import csv

# Load the JSON data
with open('cov-report.json', 'r') as json_file:
    data = json.load(json_file)

# Open the CSV file for writing
with open('cov-report.csv', 'w', newline='') as csv_file:
    writer = csv.writer(csv_file)
    
    # Write the header
    writer.writerow(['Checker Name', 'Subcategory', 'Main Event Line Number', 'Event Description'])

    # Iterate over the issues
    for issue in data['issues']:
        # Handle multiple events within each issue
        for event in issue['events']:
            # Extract the necessary details
            checker_name = issue['checkerName']
            subcategory = issue['subcategory']
            main_event_line_number = issue['mainEventLineNumber']
            event_description = event.get('eventDescription', 'N/A')
            
            # Write the row to CSV
            writer.writerow([checker_name, subcategory, main_event_line_number, event_description])

print("CSV file created successfully!")
