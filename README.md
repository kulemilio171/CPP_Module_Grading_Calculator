# CPP_Module_Grading_Calculator
Calculate student module marks &amp; cohort averages in C++ using OOP. Analyze coursework, exams, AI, Mobile Comm, &amp; IP Telephony modules.

Description:
The "StudentMarksCalculator" repository hosts a C++ program that serves as a Student Information System and marks calculator for academic modules. This program is designed to calculate the total marks scored by each student within a cohort, comprising multiple students, across different academic modules. Additionally, it computes the average marks for the entire cohort.

Features and Functionality:

Student Information: The program prompts the user to enter the number of students and collect relevant information for each student, including their name and marks for various assessment components.

Module Marks Calculation: It calculates the total marks for each student based on the coursework (weighted at 50%) and exam (weighted at 50%) components. The coursework includes a class test (weighted at 20%) and a mini-project (weighted at 30%).

Module Segmentation: The code segments the calculation by academic modules, including Artificial Intelligence (AI), Mobile Communication Engineering, and IP Telephony. Each module inherits from a base class, allowing modular and extensible code.

Polymorphism and Inheritance: The program demonstrates object-oriented principles, including polymorphism and inheritance, to achieve code reusability and maintainability. Different modules inherit common functionality while allowing for specialized behavior.

Average Calculation: After processing the marks for all students and modules, the program computes the average marks for the entire cohort, providing an overall assessment of performance.

Usage:
Users can run the program, input student information and marks, and receive individual student marks and the cohort's average marks for each module.

Additional Notes:

The code is well-documented with comments and adheres to best practices for C++ programming.
It offers a modular structure, allowing for easy extension to support additional modules or assessment components.
The code showcases the use of object-oriented programming concepts to create a flexible and efficient student marks calculation system.
