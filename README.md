# 💼 C++ Payroll System

A command-line based Payroll Management System developed in **C++**, designed to manage and display employee salary details, including overtime, holidays, and net pay calculations.


## 🧾 Project Overview

This system allows HR personnel or administrators to:

- Authenticate access via password
- View detailed employee records
- Calculate gross and net salary based on input parameters
- Display structured output in the terminal



## ✨ Features

- 🔐 Password-protected access
- 🧑‍💼 Employee profile display
- 📅 Joining date and project assignment
- 💰 Overtime and holiday salary adjustments
- 📊 Gross and net salary calculation
- 🖥️ Terminal-based interface (no GUI required)

---

## 🖼️ Screenshot:

E:\CPP_Project>Main.exe

Enter the password :23

Employee ID: PRN123

Name : Z James

Gender : male

Contact No.: 9435627994

Email Add: zu@gmail.com

City : Pune

Overtime Salary: 9600

Holidays: 2

Experience : 1

Date of joining: 10-May-2020

Project : Unity Hub

Status : Active

Gross salary : 50000

Net salary : 40600


This structured output provides a clear summary of the employee’s financial and professional details.



## 🛠️ Technologies Used

- **Language**: C++  
- **Compiler**: g++ (MinGW or TDM-GCC recommended)  
- **Platform**: Windows Command Line  



## ⚙️ How to Run

1. **Navigate to your project folder**  
   ```bash
   cd E:\CPP_Project
   ```

2. **Compile the C++ file**  
   ```bash
   g++ Main.cpp -o Main.exe
   ```

3. **Run the executable**  
   ```bash
   Main.exe
   ```

4. **Enter the password** when prompted to access employee details.


## 📌 Notes

- You can modify the employee data directly in the source code or link it to a file/database for dynamic input.
- Extendable with features like:
  - File I/O for persistent storage
  - Multiple employee records
  - Admin dashboard
  - GUI using Qt or SFML


## 🧠 Use Cases

This project is ideal for:
- **Internship portfolios** to showcase command-line applications  
- **Small businesses** needing a lightweight payroll tracker  
- **Beginners** learning file handling, conditionals, and structured output in C++
