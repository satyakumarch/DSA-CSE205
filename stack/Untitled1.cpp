//
////#include <unistd.h>
////#include <sys/types.h>
////#include <sys/stat.h>
////#include <fcntl.h>
////
////int main(){
////	int (a, b , c ,n );
////	char buff [500];
////	
////	a=open("content.txt",0_RDONLY | O_CREAT, 0777);
////	b=open("FirstHalf.txt",0_WRONLY | O_CREAT, 0777);
////	c=open("SecondHalf.txt",0_WRONLY | 0_CREAT, 0777);
////	n = read(a, buff1, 500);
////	
////	read(a, buff1, n/2);
////	write(b, buff1, n/2);
////	
////	lseek(a, n/2, SEEK_SET);
////	read(a, buff1, n/2);
////	write(c, buff1, n/2);
////	printf("The output of a:",a);
//       // printf("The output of b is:",b);
//       // printf("The output  of c is :",c);
////	return 0;
//
//#include <iostream>
//#include <vector>
//
//class Professor {
//private:
//    int id;
//    int salary;
//
//public:
//    // Constructor with default arguments
//    Professor(int id = 0, int salary = 0) : id(id), salary(salary) {}
//
//    // Member function to display professor details
//    void display() {
//        std::cout << id << " " << salary << std::endl;
//    }
//
//    // Getter for salary
//    int getSalary() {
//        return salary;
//    }
//};
//
//int main() {
//    int N;
//    std::cin >> N;
//
//    std::vector<Professor> professors;
//
//    for (int i = 0; i < N; ++i) {
//        int id, salary;
//        std::cin >> id >> salary;
//        professors.emplace_back(id, salary);
//    }
//
//    bool found = false;
//
//    for (const Professor& professor : professors) {
//        if (professor.getSalary() >= 20000) {
//            professor.display();
//            found = true;
//        }
//    }
//
//    if (!found) {
//        std::cout << "No professors with salary greater than or equal to 20000." << std::endl;
//    }
//
//    return 0;
//}
//
//

//#include <iostream>
//#include <cstring>
//
//class Student {
//private:
//    char name[100];
//    int birthYear;
//
//public:
//    // Constructor to initialize student details
//    Student(const char* initialName, int initialBirthYear) {
//        std::strcpy(name, initialName);
//        birthYear = initialBirthYear;
//        //std::cout << "Created object: " << name << std::endl;
//    }
//
//    // Destructor to track object destruction
//    ~Student() {
//        std::cout << "Destroyed object: " << name << std::endl;
//    }
//
//    // Function to update student details
//    void updateDetails(const char* newName, int newBirthYear) {
//        std::strcpy(name, newName);
//        birthYear = newBirthYear;
//    }
//
//    // Function to display student details
//    void displayDetails() {
//        std::cout << "Name: " << name << std::endl;
//        std::cout << "Birth Year: " << birthYear << std::endl;
//    }
//};
//
//int main() {
//    char defaultName[] = "xyz";
//    int defaultBirthYear = 2023;
//
//    
//    Student defaultStudent(defaultName, defaultBirthYear);
//
//   
//    char inputName[100];
//    int inputBirthYear;
//
//    std::cout << " Name: ";
//    std::cin.getline(inputName, 100);
//    std::cout << "year born: ";
//    std::cin >> inputBirthYear;
//
//  
//    Student newStudent(inputName, inputBirthYear);
//
//  
//    defaultStudent.displayDetails();
//    newStudent.displayDetails();
//
//
//
//    return 0;
//}
	
	
	
//	#include <iostream>
//#include <cstring>
//
//class Vehicle {
//private:
//    char registrationNumber[20];
//    char make[50];
//    char model[50];
//    int yearOfManufacture;
//
//public:
//    // Parameterized constructor to initialize vehicle details
//    Vehicle(const char* regNum, const char* vehicleMake, const char* vehicleModel, int year) {
//        std::strcpy(registrationNumber, regNum);
//        std::strcpy(make, vehicleMake);
//        std::strcpy(model, vehicleModel);
//        yearOfManufacture = year;
//    }
//
//    // Member function to display vehicle details
//    void displayDetails() {
//        std::cout << "Registration Number: " << registrationNumber << std::endl;
//        std::cout << "Make: " << make << std::endl;
//        std::cout << "Model: " << model << std::endl;
//        std::cout << "Year of Manufacture: " << yearOfManufacture << std::endl;
//    }
//};
//
//int main() {
//    char regNum[20];
//    char vehicleMake[50];
//    char vehicleModel[50];
//    int year;
//
//    // Input vehicle details
//    std::cin.getline(regNum, 20);
//    std::cin.getline(vehicleMake, 50);
//    std::cin.getline(vehicleModel, 50);
//    std::cin >> year;
//
//    // Create a Vehicle object with the input details
//    Vehicle vehicle(regNum, vehicleMake, vehicleModel, year);
//
//    // Display vehicle details
//    vehicle.displayDetails();
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class IntegerList {
//public:
//    IntegerList(int size) : size(size) {
//        received = new int[size];
//        for (int i = 0; i < size; i++) {
//            if (i % 2 == 0) {
//                received[i] = 10;
//            } else {
//                received[i] = 0;
//            }
//        }
//    }
//
//    ~IntegerList() {
//        delete[] received;
//    }
//
//    void display() {
//        for (int i = 0; i < size; i++) {
//            cout << received[i] << endl;
//        }
//    }
//
//private:
//    int* received;
//    int size;
//};
//
//int main() {
//    int n;
//    
//    cout << "Enter the number of integers to store: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Invalid input. Please enter a positive integer." << endl;
//        return 1;
//    }
//
//    IntegerList integerList(n);
//
//    cout << "List of integers:" << endl;
//    integerList.display();
//
//    return 0;
//}
#include <iostream>

class IntegerArray {
public:
    IntegerArray(int size) : size(size) {
        // Initialize the array using constructor and initializer list
        received = new int[size];
        for (int i = 0; i < size; i++) {
            received[i] = (i % 2 == 0) ? 10 : 0;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            std::cout << received[i] << std::endl;
        }
    }

    ~IntegerArray() {
        delete[] received;
    }

private:
    int* received;
    int size;
};

int main() {
    int n;
    std::cout << "Enter the number of integers you want to store: ";
    std::cin >> n;

    IntegerArray array(n);

    std::cout << "Values in the array:" << std::endl;
    array.display();

    return 0;
}
//Enter the number of integers you want to store: 5
//Values in the array:
//10
//0
//10
//0
//10
