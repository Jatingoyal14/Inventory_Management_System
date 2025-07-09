# Inventory Management System (Qt GUI + C++)

A full-featured Inventory Management desktop app built using Qt Widgets in C++. Includes login, inventory management, and report exporting.

## Features
- Secure login window
- GUI dashboard
- Add/view/update/delete inventory items
- Low stock alerts
- Export CSV report

## Built With
- Qt 6
- C++ (OOP, Qt Core/Widgets)


---

## 🔧 Features

- 🔐 Admin Login Authentication
- ➕ Add New Items
- 🔍 Search by Item ID
- 📋 Display All Inventory
- ✏️ Update and ❌ Delete Items
- 📉 Low Stock Alerts (Qty < 5)
- 📊 Sort Inventory (By Name / Quantity)
- 📤 Export Report to `report.csv`
- 💾 File-based Data Storage (`inventory.txt`)

---

## 🛠️ Tech Stack

- **Language:** C++
- **Concepts Used:** OOP, STL (`vector`, `string`), File Handling, Lambda, Sorting
- **Platform:** Console-based

---

## 📂 How to Run

1. **Clone the repo** or download ZIP
2. Open `inventory_management.cpp` in a C++ IDE (Code::Blocks, VS Code, etc.)
3. Compile & run

```bash
g++ inventory_management.cpp -o inventory
./inventory
