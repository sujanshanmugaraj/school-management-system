The project implements a role-based management system using C++ to handle administrative and user access for various roles within an organization. The system includes classes for different types of staff members and students, such as:

- **Teacher**
- **Worker**
- **Watchman**
- **Librarian**
- **Driver**
- **Hosteller**
- **Non-hosteller**

### Key Features:
1. **Role-Specific Operations**:
   - Each role has tailored functionality for adding, deleting, and viewing records.
   - Role-specific attributes like `department` for teachers, `block` for workers, and `floor number` for librarians.

2. **Password-Generated Access**:
   - The system generates a unique password for each user based on their name.
   - Passwords ensure secure access for different roles.

3. **Admin and User Modes**:
   - **Admin**: Can manage records for all roles by adding, deleting, and viewing user data.
   - **User**: Limited to viewing their own information based on their credentials.

4. **File-Based Storage**:
   - Data for each role is stored in separate binary files (e.g., `teacher.bin`, `worker.bin`).
   - Temporary files are used for operations like deletion and updates.

5. **Validation**:
   - Inputs like names and attributes are validated to ensure correctness (e.g., valid names, specific blocks, or departments).

6. **Access Logs**:
   - The system tracks and displays the status of each user (e.g., "in" or "out") and allows toggling the status.

### Workflow:
- **Admin Operations**:
  - Log in using a valid admin name and password.
  - Perform CRUD operations on the records of staff and students.

- **User Operations**:
  - Log in using a unique name-password combination.
  - View and modify their own status (e.g., entering or leaving the premises).

This project demonstrates core concepts of object-oriented programming, including inheritance, encapsulation, and polymorphism, along with practical implementation of file handling and input validation.
