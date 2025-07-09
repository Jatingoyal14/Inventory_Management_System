# 🧾 Inventory Management System (C++ Console Project)

![GitHub repo size](https://img.shields.io/github/repo-size/Jatingoyal14/inventory-management-system)
![GitHub stars](https://img.shields.io/github/stars/Jatingoyal14/inventory-management-system?style=social)
![GitHub forks](https://img.shields.io/github/forks/Jatingoyal14/inventory-management-system?style=social)
![GitHub license](https://img.shields.io/github/license/Jatingoyal14/inventory-management-system)

---

## 📘 Project Description

This **Inventory Management System** is a console-based application built using **C++**. It enables users to perform essential inventory operations such as adding, updating, deleting, searching, sorting, and exporting inventory data. This is a beginner-friendly project that uses **Object-Oriented Programming (OOP)** concepts and **File Handling** in C++.


● Developed a fully functional Inventory Management System using C++ and authentication features.
● Implemented modular item CRUD operations, real-time table views, low-stock alerts, and CSV report export using QFile and QTableWidget.
● Integrated user authentication system and added persistent file storage (inventory.txt) for data recovery between sessions.
● Utilized windeployqt to generate a portable Windows executable, making the system deployment-ready for production and offline use.
● Uploaded source code and `.exe` to GitHub with detailed README and screenshots for project demonstration and portfolio showcasing.

---

---
##📚 Project Info:

Author: **Jatin Goyal**
College: Amity University Gwalior
Batch: 2022–2026
Language: C++
Project Type: Console-based Desktop App
---
## 💡 Features

✅ Add new items with validations  
✅ Display all inventory items in a tabular format  
✅ Search for an item using ID  
✅ Update item details  
✅ Delete an item  
✅ Save and load inventory using file I/O  
✅ Show items with low stock (quantity < 5)  
✅ Sort inventory by name or quantity  
✅ Export inventory report to a CSV file  
✅ Login system with username & password (hardcoded)

---

## 🔐 Login Credentials

- **Username:** `Jatin`  
- **Password:** `1407`  

(Maximum 3 attempts allowed)

---

## 🧱 OOP Concepts Used

- **Encapsulation**: Class `Item` encapsulates properties and methods.  
- **Abstraction**: Item input and display logic abstracted into methods.  
- **Modular Design**: Code separated logically into functions and classes.  
- **Scalability**: Easily extendable to GUI (e.g., with Qt or other frameworks).

---

## 🧩 Modules & Structure

| Module            | Description                               |
|-------------------|-------------------------------------------|
| `Item` class      | Stores item data and handles input/output |
| `inventory` vector| Stores all items in memory                |
| File I/O          | Load/save inventory from `inventory.txt`  |
| CSV Export        | Generates `report.csv` for inventory      |
| Login System      | Basic username/password authentication    |

## 🛠️ Tech Stack

- **Language:** C++
- **Concepts Used:** OOP, STL (`vector`, `string`), File Handling, Lambda, Sorting
- **Platform:** Console-based

---

## Output Files:

| File Name       | Description                         |
| --------------- | ----------------------------------- |
| `inventory.txt` | Stores saved inventory data         |
| `report.csv`    | CSV format report of inventory data |

```
##Sample Output:
--- Inventory Management ---
1. Add Item
2. Display All
3. Search Item
4. Update Item
5. Delete Item
6. Save & Exit
7. Show Low Stock Items
8. Sort Inventory
9. Export Report
10. Save & Exit
```


## 📂 How to Run

1. **Clone the repo** or download ZIP
2. Open `inventory_management.cpp` in a C++ IDE (Code::Blocks, VS Code, etc.)
3. Compile & run

```bash
g++ inventory_management.cpp -o inventory
./inventory
