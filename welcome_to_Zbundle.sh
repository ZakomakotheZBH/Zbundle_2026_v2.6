#!/bin/bash

# Zbundle Main Script
# Display ASCII art and main menu

# Function to display Zbundle ASCII art
display_ascii_art() {
    cat << "EOF"
   _____          _           _     _     
  |__  /         | |         | |   | |    
    / /  ___  ___| |__  _   _| |__ | |___ 
   / /  / _ \/ __| '_ \| | | | '_ \| / __|
  / /__|  __/ (__| | | | |_| | |_) | \__ \
 /_____|\___|\___|_| |_|\__,_|_.__/|_|___/
                                          
EOF
}

# Function to display the main menu
display_menu() {
    echo "Welcome to Zbundle! Here is some things you can do:"
    echo "1. Apps"
    echo "2. OS running"
    echo "3. Exit"
    echo ""
}

# Function for Apps option - Navigate to Quick Start bundle apps folder
apps_option() {
    echo "Navigating to Quick Start bundle apps..."
    
    # Define the folder path
    APPS_FOLDER="./Quick Start bundle apps"
    
    # Check if the folder exists
    if [ -d "$APPS_FOLDER" ]; then
        echo "Found folder: $APPS_FOLDER"
        echo "Entering the folder..."
        cd "$APPS_FOLDER" || {
            echo "Error: Could not change to directory $APPS_FOLDER"
            read -p "Press Enter to return to main menu..."
            return 1
        }
        echo "Now in: $(pwd)"
        echo "Listing contents:"
        ls -la
        echo ""
        echo "You are now in the Quick Start bundle apps folder."
        echo "Type 'cd ..' to return to the parent directory, or 'exit' to return to Zbundle menu."
        
        # Start a subshell so the user can navigate and run commands
        # When they exit the subshell, we return to the main menu
        $SHELL
        
        # Return to the original directory
        cd - > /dev/null || true
        echo "Returned to Zbundle main menu."
    else
        echo "Error: Folder 'Quick Start bundle apps' not found in the current directory!"
        echo "Current directory: $(pwd)"
        echo "Please make sure the folder exists."
        read -p "Press Enter to return to main menu..."
    fi
}

# Function for OS running option
os_running_option() {
    echo "Go to root for OS!"
    echo ""
    read -p "Press Enter to return to main menu..."
}

# Main script execution
main() {
    clear
    display_ascii_art
    echo ""
    
    while true; do
        display_menu
        read -p "Enter your choice (1-3): " choice
        
        case $choice in
            1)
                clear
                display_ascii_art
                echo ""
                apps_option
                clear
                display_ascii_art
                echo ""
                ;;
            2)
                clear
                display_ascii_art
                echo ""
                os_running_option
                clear
                display_ascii_art
                echo ""
                ;;
            3)
                echo "Exiting Zbundle. Goodbye!"
                exit 0
                ;;
            *)
                echo "Invalid option. Please choose 1, 2, or 3."
                sleep 1
                clear
                display_ascii_art
                echo ""
                ;;
        esac
    done
}

# Run the main function
main
