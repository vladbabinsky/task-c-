#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct FileManager {
    char fileName[50];
    char newFileName[50];
    char directory[50];
};

struct Employee {
    char name[50];
    char surname[50];
    char position[50];
    int age;
};

int main() {
    FileManager fileManager;
    Employee employees[100];
    int employeeCount = 0;

    char command[20];
    cout << "Enter 'file' to manage files or 'employee' to manage employees: ";
    cin >> command;

    if (strcmp(command, "file") == 0) {
        cout << "File Manager Options -- create, delete, rename, move, view" << endl;
        cout << "Enter command: ";
        cin >> command;

        if (strcmp(command, "create") == 0) {
            cout << "Enter file name to create: ";
            cin >> fileManager.fileName;
            ofstream file(fileManager.fileName);
            if (file) {
                cout << "File created successfully!" << endl;
            } else {
                cout << "Error creating file!" << endl;
            }
        } else if (strcmp(command, "delete") == 0) {
            cout << "Enter file name to delete: ";
            cin >> fileManager.fileName;
            if (remove(fileManager.fileName) == 0) {
                cout << "File deleted successfully!" << endl;
            } else {
                cout << "Error deleting file!" << endl;
            }
        } else if (strcmp(command, "rename") == 0) {
            cout << "Enter current file name: ";
            cin >> fileManager.fileName;
            cout << "Enter new file name: ";
            cin >> fileManager.newFileName;
            if (rename(fileManager.fileName, fileManager.newFileName) == 0) {
                cout << "File renamed successfully!" << endl;
            } else {
                cout << "Error renaming file!" << endl;
            }
        } else if (strcmp(command, "move") == 0) {
            cout << "Enter file name to move: ";
            cin >> fileManager.fileName;
            cout << "Enter destination directory: ";
            cin >> fileManager.directory;
            char destination[100];

            strcpy(destination, fileManager.directory);
            strcat(destination, "/");
            strcat(destination, fileManager.fileName);

            if (rename(fileManager.fileName, destination) == 0) {
                cout << "File moved successfully!" << endl;
            } else {
                cout << "Error moving file!" << endl;
            }
        } else if (strcmp(command, "view") == 0) {
            cout << "Enter file name to view: ";
            cin >> fileManager.fileName;
            ifstream file(fileManager.fileName);
            if (file) {
                cout << "File contents:" << endl;
                char line[100];
                while (file.getline(line, 100)) {
                    cout << line << endl;
                }
            } else {
                cout << "Error opening file!" << endl;
            }
        }
    } else if (strcmp(command, "employee") == 0) {
        cout << "Employee Manager Options: add, search, display, save, load" << endl;
        cout << "Enter command: ";
        cin >> command;

        if (strcmp(command, "add") == 0) {
            cout << "Enter name: ";

            cin >> employees[employeeCount].name;
            cout << "Enter surname: ";

            cin >> employees[employeeCount].surname;
            cout << "Enter position: ";

            cin >> employees[employeeCount].position;
            cout << "Enter age: ";

            cin >> employees[employeeCount].age;
            employeeCount++;
            cout << "Employee added!" << endl;

        } else if (strcmp(command, "search") == 0) {
            char surname[50];
            cout << "Enter surname to search: ";
            cin >> surname;
            bool found = false;
            for (int i = 0; i < employeeCount; i++) {
                if (strcmp(employees[i].surname, surname) == 0) {
                    cout << "Employee found: " << employees[i].name << " " << employees[i].surname << ", " << employees[i].position << ", " << employees[i].age << " years old" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found!" << endl;
            }
        } else if (strcmp(command, "display") == 0) {
            cout << "Employee list:" << endl;
            for (int i = 0; i < employeeCount; i++) {
                cout << employees[i].name << " " << employees[i].surname << ", " << employees[i].position << ", " << employees[i].age << " years old" << endl;
            }
        } else if (strcmp(command, "save") == 0) {
            ofstream file("employees.txt");
            for (int i = 0; i < employeeCount; i++) {
                file << employees[i].name << " " << employees[i].surname << " " << employees[i].position << " " << employees[i].age << endl;
            }
            file.close();
            cout << "Employee data saved!" << endl;
        } else if (strcmp(command, "load") == 0) {
            ifstream file("employees.txt");
            employeeCount = 0;
            while (file >> employees[employeeCount].name >> employees[employeeCount].surname >> employees[employeeCount].position >> employees[employeeCount].age) {
                employeeCount++;
            }
            file.close();
            cout << "Employee data loaded!" << endl;
        }
    }
}
