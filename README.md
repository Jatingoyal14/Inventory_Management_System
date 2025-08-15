# 🧾 Inventory Management System (C++ Console Project)

## 📌 Overview
This **Inventory Management System** is a **menu-driven C++ console application** designed to manage inventory items efficiently.  
It now features **soft login authentication** with **file-based user accounts** and **new user registration**, replacing the previous hardcoded login system.  
The system supports adding, updating, deleting, searching, sorting, and exporting inventory data, along with low-stock alerts.

---

## 🚀 Features

### 🔐 Authentication
- **Soft Login**: Reads credentials from `users.txt`.
- **User Registration**: Allows creation of new user accounts.
- **Duplicate Username Protection**.
- **3 Login Attempts** limit for security.

### 📂 Inventory Management
- **Add Item**: Add a new item with ID, name, quantity, and price.
- **Display All Items**: View all inventory in a formatted table.
- **Search Item**: Find items by ID.
- **Update Item**: Modify details of an existing item.
- **Delete Item**: Remove items by ID.
- **Low Stock Alert**: Shows items with quantity < 5.
- **Sort Inventory**: Sort by name or quantity.
- **Export Report**: Save inventory as `report.csv` for Excel or analysis.

### 💾 File Handling
- **Persistent Storage** in `inventory.txt` (CSV format).
- **Export Reports** in `report.csv`.
- **Soft Login Data** stored in `users.txt`.

---

## 🛠️ Tech Stack
- **Language**: C++17
- **Libraries Used**:
  - `<iostream>` – Input/Output operations
  - `<fstream>` – File handling
  - `<vector>` – Dynamic storage of items
  - `<iomanip>` – Formatted output
  - `<algorithm>` – Sorting functions
  - `<sstream>` – String parsing

---

## 📂 File Structure
```

├── inventory\_management.cpp   # Main source code
├── inventory.txt               # Inventory storage file
├── report.csv                   # Generated reports
├── users.txt                    # User login data
├── README.md                    # Project documentation

```

---

## 🔄 Workflow

### **1️⃣ User Authentication**
- On start, the system displays:
```

1. Login
2. Register
3. Exit

```
- **Login**: Reads username/password from `users.txt`.
- **Register**: Prompts for a username and password, checks duplicates, and saves them in `users.txt`.
- **3 failed login attempts** → exit.

---

### **2️⃣ Main Menu (After Login)**
```

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

---

### **3️⃣ Inventory Operations**
- **Add Item**: User inputs details → stored in memory and optionally saved.
- **Display All**: Shows table of all inventory.
- **Search Item**: Searches by ID.
- **Update Item**: Modifies existing entry.
- **Delete Item**: Removes by ID.
- **Low Stock Alert**: Lists items with quantity < 5.
- **Sort Inventory**: Sorts alphabetically or by quantity.
- **Export Report**: Saves CSV report.
- **Save & Exit**: Writes inventory to `inventory.txt`.

---

## 📊 Data Flow
1. **Login/Register** → Validates user.
2. **Load Inventory** → Reads from `inventory.txt`.
3. **Perform Operations** → Add, update, delete, search, sort.
4. **Save Inventory** → Updates `inventory.txt` and `report.csv`.

---

## 📷 Example Users File (`users.txt`)
```

Jatin,1407
admin,admin123
user1,password1

```

---

## ⚠️ Known Limitations
- Passwords are stored in **plain text** (can be improved with hashing).
- File parsing is CSV-based without strict validation (possible to enhance).
- No role-based access (e.g., Admin vs Viewer).

---

## 🔮 Future Improvements
- Password hashing (SHA-256 / bcrypt).
- Role-based access control.
- GUI interface (Qt, wxWidgets).
- Database integration (MySQL/SQLite).
- REST API for web or mobile app support.

---

## 📜 License
This project is open-source and free to use under the MIT License.

---

## ✨ Author
**Jatin Goyal**  
CSE Student – Amity University Gwalior (Batch 2022-26)  

