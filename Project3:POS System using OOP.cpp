//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//using namespace std;
//class cloth
//{
//    int id;
//    string name;
//    double price;
//    double length;
//
//public:
//    cloth(int id, string name, double price, double quantity) : id(id), name(name), price(price), length(quantity) {}
//    void update_quantity(double quantity)
//    {
//        this->length = quantity;
//    }
//    void update_price(double price)
//    {
//        this->price = price;
//    }
//    int get_id()
//    {
//        return id;
//    }
//    double get_price()
//    {
//        return price;
//    }
//    double get_quatity()
//    {
//        return length;
//    }
//    string get_name()
//    {
//        return name;
//    }
//    void update_length(double len)
//    {
//        length += len;
//    }
//    void display()
//    {
//        cout << "Cloth Id = " << id << "\nCloth Name = " << name << "\nPrice = " << price << "\nLength Availble = " << length << "\n\n\n\n\n\n";
//    }
//};
//class cover
//{
//protected:
//    int id;
//    double price;
//    int quantity;
//    double cost;
//    double profit;
//    cloth clothe;
//    double total_cost;
//    double total_price;
//    double total_profit;
//
//public:
//    cover(int id, int quantity, cloth clothe) : id(id), quantity(quantity), clothe(clothe)
//    {
//        cost = 0;
//        price = cost * 1.25;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - (profit * cost);
//    }
//    void virtual display() = 0;
//    int get_id() {
//        return id;
//    }
//    double get_profit()
//    {
//        return profit;
//    }
//};
//class type1_car : public cover
//{
//
//    double cloth_length = 25;
//
//public:
//    type1_car(int id, int quantity, cloth clothe) : cover(id, quantity, clothe)
//    {
//        cost = cloth_length * clothe.get_price();
//        price = cost * 1.25;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - total_cost;
//    }
//
//    double get_price()
//    {
//        return price;
//    }
//    void set_discount(float discount)
//    {
//        price = price * discount;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - (profit * cost);
//    }
//    void set_quantity(int quantity)
//    {
//        this->quantity += quantity;
//    }
//    double get_quantity()
//    {
//        return quantity;
//    }
//    double get_total_cost()
//    {
//        return total_cost;
//    }
//    double get_total_price()
//    {
//        return total_price;
//    }
//    double get_total_profit()
//    {
//        return total_profit;
//    }
//    int get_clothid()
//    {
//        return clothe.get_id();
//    }
//    void display()
//    {
//        cout << "Car type = 1\nCover Id = " << id << "\nPrice = " << price << "\nCost = " << cost << "\nProfit = " << profit << "\nQuantity = " << quantity << "\nTotal Price = " << total_price << "\nTotal Cost = " << total_cost << "\nTotal Profit = " << total_profit << "\n\n\n\n\n\n";
//    }
//};
//class type2_car : public cover
//{
//
//    double cloth_length = 25;
//
//public:
//    type2_car(int id, int quantity, cloth clothe) : cover(id, quantity, clothe)
//    {
//        cost = cloth_length * clothe.get_price();
//        price = cost * 1.25;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - total_cost;
//    }
//
//    double get_price()
//    {
//        return price;
//    }
//    void set_discount(float discount)
//    {
//        price = price * discount;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - (profit * cost);
//    }
//    void set_quantity(int quantity)
//    {
//        this->quantity += quantity;
//    }
//    double get_quantity()
//    {
//        return quantity;
//    }
//    double get_total_cost()
//    {
//        return total_cost;
//    }
//    double get_total_price()
//    {
//        return total_price;
//    }
//    double get_total_profit()
//    {
//        return total_profit;
//    }
//    int get_clothid()
//    {
//        return clothe.get_id();
//    }
//    void display()
//    {
//        cout << "Car type = 2\nCover Id = " << id << "\nPrice = " << price << "\nCost = " << cost << "\nProfit = " << profit << "\nQuantity = " << quantity << "\nTotal Price = " << total_price << "\nTotal Cost = " << total_cost << "\nTotal Profit = " << total_profit << "\n\n\n\n\n\n";
//    }
//};
//class type4_car : public cover
//{
//
//    double cloth_length = 25;
//
//public:
//    type4_car(int id, int quantity, cloth clothe) : cover(id, quantity, clothe)
//    {
//        cost = cloth_length * clothe.get_price();
//        price = cost * 1.25;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - total_cost;
//    }
//
//    double get_price()
//    {
//        return price;
//    }
//    void set_discount(float discount)
//    {
//        price = price * discount;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - (profit * cost);
//    }
//    void set_quantity(int quantity)
//    {
//        this->quantity += quantity;
//    }
//    double get_quantity()
//    {
//        return quantity;
//    }
//    double get_total_cost()
//    {
//        return total_cost;
//    }
//    double get_total_price()
//    {
//        return total_price;
//    }
//    double get_total_profit()
//    {
//        return total_profit;
//    }
//    int get_clothid()
//    {
//        return clothe.get_id();
//    }
//    void display()
//    {
//        cout << "Car type = 4\nCover Id = " << id << "\nPrice = " << price << "\nCost = " << cost << "\nProfit = " << profit << "\nQuantity = " << quantity << "\nTotal Price = " << total_price << "\nTotal Cost = " << total_cost << "\nTotal Profit = " << total_profit << "\n\n\n\n\n\n";
//    }
//};
//class type3_car : public cover
//{
//
//    double cloth_length = 25;
//
//public:
//    type3_car(int id, int quantity, cloth clothe) : cover(id, quantity, clothe)
//    {
//        cost = cloth_length * clothe.get_price();
//        price = cost * 1.25;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - total_cost;
//    }
//
//    double get_price()
//    {
//        return price;
//    }
//    void set_discount(double discount)
//    {
//        price = price * discount;
//        profit = price - cost;
//        total_cost = cost * quantity;
//        total_price = price * quantity;
//        total_profit = total_price - (profit * cost);
//    }
//    void set_quantity(int quantity)
//    {
//        this->quantity += quantity;
//    }
//    int get_quantity()
//    {
//        return quantity;
//    }
//    double get_total_cost()
//    {
//        return total_cost;
//    }
//    double get_total_price()
//    {
//        return total_price;
//    }
//    double get_total_profit()
//    {
//        return total_profit;
//    }
//    int get_clothid()
//    {
//        return clothe.get_id();
//    }
//    void display()
//    {
//        cout << "Car type = 3\nCover Id = " << id << "\nPrice = " << price << "\nCost = " << cost << "\nProfit = " << profit << "\nQuantity = " << quantity << "\nTotal Price = " << total_price << "\nTotal Cost = " << total_cost << "\nTotal Profit = " << total_profit << "\n\n\n\n\n\n";
//    }
//};
//class customer
//{
//    string name;
//    string phone_number;
//    double bill;
//    int id;
//    int size = 0;
//    int* order_history = new int[size];
//
//public:
//    // static int id;
//    customer(string name, string phone_number, int id) :id(id), name(name), phone_number(phone_number)
//    {
//        bill = 0;
//    }
//    void update_bill(float update)
//    {
//        bill += update;
//    }
//    void add_order(int id)
//    {
//        size++;
//        order_history[size] = id;
//    }
//    void display()
//    {
//        cout << "Name = " << name << "\nPhone Number = " << phone_number << endl;
//    }
//    string get_name()
//    {
//        return name;
//    }
//    string get_phone()
//    {
//        return phone_number;
//    }
//    int get_id() {
//        return id;
//    }
//    double get_bill()
//    {
//        return bill;
//    }
//};
//class sales_oder
//{
//    customer person;
//    double total_bill;
//    double total_profit;
//    type1_car car1;
//    type2_car car2;
//    type3_car car3;
//    type4_car car4;
//    int quantity1;
//    int quantity2;
//    int quantity3;
//    int quantity4;
//
//public:
//    sales_oder(customer person, type1_car car1, type2_car car2, type3_car car3, type4_car car4) : person(person), car1(car1), car2(car2), car3(car3), car4(car4)
//    {
//        total_bill = 0;
//        total_profit = 0;
//        // person.add_order(order_id);
//        cout << "Enter the Quantity of Type 1 Covers = ";
//        cin >> quantity1;
//        total_bill += (quantity1 * car1.get_price());
//        total_profit += (quantity1 * car1.get_profit());
//        quantity1 = quantity1 * (-1);
//        car1.set_quantity(quantity1);
//
//        cout << "Enter the Quantity of Type 2 Covers = ";
//
//        cin >> quantity2;
//        total_bill += (quantity2 * car2.get_price());
//        total_profit += (quantity2 * car2.get_profit());
//        quantity2 = quantity2 * (-1);
//        car2.set_quantity(quantity2);
//
//        cout << "Enter the Quantity of Type 3 Covers = ";
//
//        cin >> quantity3;
//        total_bill += (quantity3 * car3.get_price());
//        total_profit += (quantity3 * car3.get_profit());
//        quantity3 = quantity3 * (-1);
//        car3.set_quantity(quantity3);
//
//        cout << "Enter the Quantity of Type 4 Covers = ";
//
//        cin >> quantity4;
//        total_bill += (quantity4 * car4.get_price());
//        total_profit += (quantity4 * car4.get_profit());
//        quantity4 = quantity4 * (-1);
//        car4.set_quantity(quantity4);
//        cout << "\nOrder made Successfully!\n";
//        cout << "Total bill = " << total_bill << endl;
//    }
//    int get_customerid() {
//        return person.get_id();
//    }
//    int get_car1id() {
//        return car1.get_id();
//    }
//    int get_car2id() {
//        return car2.get_id();
//    }
//    int get_car3id() {
//        return car3.get_id();
//    }
//    int get_car4id() {
//        return car4.get_id();
//    }
//    double get_bill()
//    {
//        return total_bill;
//    }
//    double get_profit()
//    {
//        return total_profit;
//    }
//    void display()
//    {
//        cout << "Customer Name = " << person.get_name() << "\nType 1 Car Covers = " << -1 * quantity1 << "\nType 2 Car Covers = " << -1 * quantity2 << "\nType 3 Car Covers = " << -1 * quantity3 << "\nType 4 Car Covers = " << -1 * quantity4 << "\nTotal Covers = " << (-1 * quantity1) + (-1 * quantity2) + (-1 * quantity3) + (-1 * quantity4) << "\nTotal Bill = " << total_bill << endl;
//    }
//};
//class supplier
//{
//    string name;
//    string phone_number;
//    int id;
//    double payable_bill;
//    vector<int> history_order_id;
//
//public:
//    supplier(string name, string phone_number, int id, double payable_bill) : name(name), phone_number(phone_number), id(id), payable_bill(payable_bill) {}
//    void buy_cloth(cloth obj, double length)
//    {
//        obj.update_length(length);
//        payable_bill += (obj.get_price() * length);
//    }
//    void update_bill(double bill)
//    {
//        payable_bill += bill;
//    }
//    string get_name()
//    {
//        return name;
//    }
//    string get_phone()
//    {
//        return phone_number;
//    }
//    int get_id()
//    {
//        return id;
//    }
//    void add_order(int id)
//    {
//        history_order_id.push_back(id);
//    }
//    double get_payable() {
//        return payable_bill;
//    }
//    void display()
//    {
//        cout << "Name = " << name << "\nID = " << id << "\nPhone Number = " << phone_number << "\nPayeble Bill = " << payable_bill << endl;
//    }
//};
//class purchase_order
//{
//    int id;
//    double bill;
//    double cloth_length;
//    int supplier_id;
//    string supplier_name;
//    string cloth_type;
//
//public:
//    purchase_order(int id, vector<double> length, supplier person, vector<cloth> cloth_arr, int size) : id(id)
//    {
//        supplier_id = person.get_id();
//        supplier_name = person.get_name();
//        bill = 0;
//        cloth_length = 0;
//
//        for (int i = 0; i < size; i++)
//        {
//
//            bill += (length[i] * cloth_arr[i].get_price());
//            cloth_arr[i].update_length(length[i]);
//            cloth_length += length[i];
//        }
//        person.update_bill(bill);
//        person.add_order(id);
//        cout << "Purchase Order Added Successfully!\n";
//    }
//    void display()
//    {
//        cout << "ID = " << id << "\nSupplier Id = " << supplier_id << "\nSupplier name = " << supplier_name << "\nTotal Cloth Pruchased = " << cloth_length << "\nTotal Bill = " << bill << endl;
//    }
//};
//class employee
//{
//protected:
//    string name;
//    string phone;
//    int id;
//    int age;
//    double salary;
//
//public:
//    employee(string name, string phone, int id, float age) : name(name), phone(phone), id(id), age(age)
//    {
//        salary = 30000;
//    }
//    void display()
//    {
//        cout << "Name = " << name << "\nID = " << id << "\nAge = " << age << "\nSalary = " << salary << endl;
//    }
//    void set_name(string name)
//    {
//        this->name = name;
//    }
//    void set_phone(string phone)
//    {
//        this->phone = phone;
//    }
//    void set_age(float age)
//    {
//        this->age = age;
//    }
//    void give_bonus(float percentage)
//    {
//        salary *= percentage;
//    }
//    string get_name()
//    {
//        return name;
//    }
//    string get_phone()
//    {
//        return phone;
//    }
//    float get_age()
//    {
//        return age;
//    }
//    int get_id()
//    {
//        return id;
//    }
//    double get_salary()
//    {
//        return salary;
//    }
//};
//class hourly_employee : public employee
//{
//    float hours_worked;
//
//public:
//    hourly_employee(string name, string phone, int id, float age, float hours_worked) : employee(name, phone, id, age), hours_worked(hours_worked)
//    {
//
//        salary = hours_worked * 120 * 30;
//        if (age > 50)
//        {
//            salary *= 1.50;
//        }
//    }
//    void display()
//    {
//        cout << "Name = " << name << "\nID = " << id << "\nAge = " << age << "\nHours Worked = " << hours_worked << "\nSalary = " << salary << endl;
//    }
//    void set_name(string name)
//    {
//        this->name = name;
//    }
//    void set_phone(string phone)
//    {
//        this->phone = phone;
//    }
//    void set_age(float age)
//    {
//        this->age = age;
//    }
//    void set_hours_worked(int hours_worked)
//    {
//        salary = hours_worked * 120 * 30;
//        if (age > 50)
//        {
//            salary *= 1.50;
//        }
//    }
//    string get_name()
//    {
//        return name;
//    }
//    string get_phone()
//    {
//        return phone;
//    }
//    float get_age()
//    {
//        return age;
//    }
//    int get_id()
//    {
//        return id;
//    }
//    float get_hours()
//    {
//        return hours_worked;
//    }
//};
//class contract_employee : public employee
//{
//    int covers_made;
//
//public:
//    contract_employee(string name, string phone, int id, float age, int covers_made) : employee(name, phone, id, age), covers_made(covers_made)
//    {
//        salary = covers_made * 80 * 30;
//        if (age > 50)
//        {
//            salary *= 1.50;
//        }
//    }
//    void display()
//    {
//        cout << "Name = " << name << "\nID = " << id << "\nAge = " << age << "\nCovers made = " << covers_made << "\nSalary = " << salary << endl;
//    }
//    void set_name(string name)
//    {
//        this->name = name;
//    }
//    void set_phone(string phone)
//    {
//        this->phone = phone;
//    }
//    void set_age(float age)
//    {
//        this->age = age;
//    }
//    void set_covers_made(int covers_made)
//    {
//        salary = covers_made * 80 * 30;
//        if (age > 50)
//        {
//            salary *= 1.50;
//        }
//    }
//    string get_name()
//    {
//        return name;
//    }
//    string get_phone()
//    {
//        return phone;
//    }
//    float get_age()
//    {
//        return age;
//    }
//    int get_id()
//    {
//        return id;
//    }
//    int get_covers()
//    {
//        return covers_made;
//    }
//};
//class sales_employee : public employee
//{
//    int sales_made;
//    int base_salary;
//
//public:
//    sales_employee(string name, string phone, int id, int age, int sales_made) : employee(name, phone, id, age), sales_made(sales_made)
//    {
//        base_salary = 15000;
//        salary = sales_made * 50 * 30;
//        salary += base_salary;
//        if (age > 50)
//        {
//            salary *= 1.50;
//        }
//    }
//    void display()
//    {
//        cout << "Name = " << name << "\nID = " << id << "\nAge = " << age << "\nSales Made = " << sales_made << "\nSalary = " << salary << endl;
//    }
//    void set_name(string name)
//    {
//        this->name = name;
//    }
//    void set_phone(string phone)
//    {
//        this->phone = phone;
//    }
//    void set_age(float age)
//    {
//        this->age = age;
//    }
//    void set_sales(int sales_made)
//    {
//        salary = sales_made * 50 * 30;
//        salary += base_salary;
//        if (age > 50)
//        {
//            salary *= 1.50;
//        }
//    }
//    string get_name()
//    {
//        return name;
//    }
//    string get_phone()
//    {
//        return phone;
//    }
//    float get_age()
//    {
//        return age;
//    }
//    int get_id()
//    {
//        return id;
//    }
//    float get_sales()
//    {
//        return sales_made;
//    }
//};
//
//void save_cloth(cloth cloth_type)
//{
//    ofstream fout("cloth.txt", ios::app);
//
//    fout << cloth_type.get_name() << " "
//        << cloth_type.get_price() << " "
//        << cloth_type.get_quatity() << endl;
//    fout.close();
//}
//
//void load_cloth(vector<cloth>& cloth_type)
//{
//    ifstream fin("cloth.txt");
//    if (!fin)
//        return;
//
//    cloth_type.clear();
//
//    string name;
//    double price, length;
//    int id = 100;
//
//    while (fin >> name >> price >> length)
//    {
//        cloth temp(id, name, price, length);
//        cloth_type.push_back(temp);
//        id++;
//    }
//    fin.close();
//}
//
//void save_customer(customer person)
//{
//    ofstream fout("customer.txt", ios::app);
//
//    fout << person.get_name() << " ";
//    fout << person.get_phone() << " " << person.get_id() << endl;
//
//    fout.close();
//}
//
//void load_customer(vector<customer>& person)
//{
//    ifstream fin("customer.txt");
//    if (!fin)
//        return;
//
//    person.clear();
//    string name, phone;
//    int id;
//
//    while (fin >> name >> phone >> id)
//    {
//        customer temp(name, phone, id);
//        person.push_back(temp);
//    }
//    fin.close();
//}
//
//void save_car1(type1_car car1)
//{
//    ofstream fout("car_type1.txt", ios::app);
//
//    fout << car1.get_quantity() << " "
//        << car1.get_price() << " " << car1.get_clothid() << endl;
//
//    fout.close();
//}
//
//void load_car1(vector<type1_car>& car1, vector<cloth>& cloth_type)
//{
//
//    ifstream fin("car_type1.txt");
//    if (!fin)
//        return;
//
//    car1.clear();
//    int qty;
//    double price;
//    int id;
//
//    while (fin >> qty >> price >> id)
//    {
//
//        type1_car temp(id, qty, cloth_type[id]);
//        car1.push_back(temp);
//    }
//    fin.close();
//}
//
//void save_car2(type2_car car2)
//{
//    ofstream fout("car_type2.txt", ios::app);
//
//    fout << car2.get_quantity() << " "
//        << car2.get_price() << " " << car2.get_clothid() << endl;
//
//    fout.close();
//}
//
//void load_car2(vector<type2_car>& car2, vector<cloth>& cloth_type)
//{
//    ifstream fin("car_type2.txt");
//    if (!fin)
//        return;
//
//    car2.clear();
//    int qty;
//    double price;
//    int id;
//
//    while (fin >> qty >> price >> id)
//    {
//        type2_car temp(id, qty, cloth_type[id]);
//        car2.push_back(temp);
//    }
//    fin.close();
//}
//
//void save_car3(type3_car car3)
//{
//    ofstream fout("car_type3.txt", ios::app);
//
//    fout << car3.get_quantity() << " "
//        << car3.get_price() << " " << car3.get_clothid() << endl;
//
//    fout.close();
//}
//
//void load_car3(vector<type3_car>& car3, vector<cloth>& cloth_type)
//{
//    ifstream fin("car_type3.txt");
//    if (!fin)
//        return;
//
//    car3.clear();
//    int qty;
//    double price;
//    int id;
//
//    while (fin >> qty >> price >> id)
//    {
//        type3_car temp(id, qty, cloth_type[id]);
//        car3.push_back(temp);
//    }
//    fin.close();
//}
//
//void save_car4(type4_car car4)
//{
//    ofstream fout("car_type4.txt", ios::app);
//
//    fout << car4.get_quantity() << " "
//        << car4.get_price() << " " << car4.get_clothid() << endl;
//
//    fout.close();
//}
//
//void load_car4(vector<type4_car>& car4, vector<cloth>& cloth_type)
//{
//    ifstream fin("car_type4.txt");
//    if (!fin)
//        return;
//
//    car4.clear();
//    int qty;
//    double price;
//    int id;
//
//    while (fin >> qty >> price >> id)
//    {
//        type4_car temp(id, qty, cloth_type[id]);
//        car4.push_back(temp);
//    }
//    fin.close();
//}
//
//void save_employee(employee emp)
//{
//    ofstream fout("employee.txt", ios::app);
//
//    fout << emp.get_name() << " "
//        << emp.get_id() << " "
//        << emp.get_phone() << " "
//        << emp.get_age() << " "
//        << endl;
//
//    fout.close();
//}
//
//void load_employee(vector<employee>& emp)
//{
//    ifstream fin("employee.txt");
//    if (!fin)
//        return;
//
//    emp.clear();
//    string name, phone;
//    int id;
//    float age;
//
//    while (fin >> name >> id >> phone >> age)
//    {
//        emp.push_back(employee(name, phone, id, age));
//    }
//    fin.close();
//}
//
//void save_sales_employee(sales_employee emp)
//{
//    ofstream fout("sales_employee.txt", ios::app);
//
//    fout << emp.get_name() << " "
//        << emp.get_id() << " "
//        << emp.get_phone() << " "
//        << emp.get_age() << " "
//        << emp.get_sales() << " "
//        << endl;
//
//    fout.close();
//}
//
//void load_sales_employee(vector<sales_employee>& emp)
//{
//    ifstream fin("sales_employee.txt");
//    if (!fin)
//        return;
//
//    emp.clear();
//
//    string name, phone;
//    int id, sales;
//    float age;
//    while (fin >> name >> id >> phone >> age >> sales)
//    {
//        emp.push_back(sales_employee(name, phone, id, age, sales));
//    }
//    fin.close();
//}
//
//void save_hourly_employee(hourly_employee emp)
//{
//    ofstream fout("hourly_employee.txt", ios::app);
//    fout << emp.get_name() << " "
//        << emp.get_id() << " "
//        << emp.get_phone() << " "
//        << emp.get_age() << " "
//        << emp.get_hours() << " "
//        << endl;
//    fout.close();
//}
//
//void load_hourly_employee(vector<hourly_employee>& emp)
//{
//    ifstream fin("hourly_employee.txt");
//    if (!fin)
//        return;
//
//    emp.clear();
//    string name, phone;
//    int id;
//    float age, hours;
//    while (fin >> name >> id >> phone >> age >> hours)
//    {
//        emp.push_back(hourly_employee(name, phone, id, age, hours));
//    }
//    fin.close();
//}
//
//void save_contract_employee(contract_employee emp)
//{
//    ofstream fout("contract_employee.txt");
//    fout << emp.get_name() << " "
//        << emp.get_id() << " "
//        << emp.get_phone() << " "
//        << emp.get_age() << " "
//        << emp.get_covers() << " "
//        << endl;
//    fout.close();
//}
//
//void load_contract_employee(vector<contract_employee>& emp)
//{
//    ifstream fin("contract_employee.txt");
//    if (!fin)
//        return;
//
//    emp.clear();
//    string name, phone;
//    int id, covers;
//    float age;
//    while (fin >> name >> id >> phone >> age >> covers)
//    {
//        emp.push_back(contract_employee(name, phone, id, age, covers));
//    }
//    fin.close();
//}
//
//void save_supplier(supplier person)
//{
//    ofstream fout("supplier.txt", ios::app);
//
//    fout << person.get_name() << " ";
//    fout << person.get_phone() << " " << person.get_id() << " " << person.get_payable() << endl;
//
//    fout.close();
//}
//
//void load_supplier(vector<supplier>& person)
//{
//    ifstream fin("supplier.txt");
//    if (!fin)
//        return;
//
//    person.clear();
//    string name, phone;
//    int id;
//    double bill;
//
//    while (fin >> name >> phone >> id >> bill)
//    {
//        supplier temp(name, phone, id, bill);
//        person.push_back(temp);
//    }
//    fin.close();
//}
//
//void save_sales_order(sales_oder order)
//{
//    ofstream fout("sales_order.txt");
//    fout << order.get_customerid() << " "
//        << order.get_car1id() << " "
//        << order.get_car2id() << " "
//        << order.get_car3id() << " "
//        << order.get_car4id() << " "
//        << endl;
//    fout.close();
//}
//
//void load_sales_order(vector<sales_oder>& order, vector<customer>& person, vector<type1_car>& car1, vector<type2_car>& car2, vector<type3_car>& car3, vector<type4_car>& car4)
//{
//    ifstream fin("sales_order.txt");
//    if (!fin)
//        return;
//
//    order.clear();
//    int pid, c1id, c2id, c3id, c4id;
//
//    while (fin >> pid >> c1id >> c2id >> c3id >> c4id)
//    {
//        order.push_back(sales_oder(person[pid], car1[c1id], car2[c2id], car3[c3id], car4[c4id]));
//    }
//    fin.close();
//}
//
//// void save_purchase_order(purchase_order order)
//// {
////     ofstream fout("contract_employee.txt");
////      fout << order.get_customerid() << " "
////          << order.get_car1id() << " "
////          << order.get_car2id() << " "
////          << order.get_car3id() << " "
////          << order.get_car4id() << " "
////          << endl;
////     fout.close();
//// }
//
//// void load_sales_order(vector<sales_oder> & order,vector<customer> & person,vector<type1_car> & car1,vector<type2_car> & car2,vector<type3_car> & car3,vector<type4_car> & car4)
//// {
////     ifstream fin("contract_employee.txt");
////     if (!fin)
////         return;
//
////     order.clear();
////     int pid,c1id,c2id,c3id,c4id;
//
////      while (fin >> pid >> c1id >> c2id >> c3id>>c4id)
////     {
////         order.push_back(sales_oder(person[pid],car1[c1id],car2[c2id],car3[c3id],car4[c4id]));
////     }
////     fin.close();
//// }
//
//void calculate_finances(vector<sales_oder>& order, vector<employee>& e1, vector<sales_employee>& sales, vector<hourly_employee>& hourly, vector<contract_employee>& contract, vector<supplier>& supply, vector<customer>& person) {
//    double total_sale = 0, total_profit = 0;
//    for (int i = 0; i < order.size(); i++)
//    {
//        total_sale += order[i].get_bill();
//        total_profit += order[i].get_profit();
//    }
//    double total_payable = 0, total_payable_due = 0, total_unpaid = 0;
//    for (int i = 0; i < supply.size(); i++)
//    {
//        total_payable_due += supply[i].get_payable();
//
//    }
//    for (int i = 0; i < e1.size(); i++)
//    {
//        total_payable += e1[i].get_salary();
//    }
//    for (int i = 0; i < sales.size(); i++)
//    {
//        total_payable += sales[i].get_salary();
//    }
//    for (int i = 0; i < hourly.size(); i++)
//    {
//        total_payable += hourly[i].get_salary();
//    }
//    for (int i = 0; i < contract.size(); i++)
//    {
//        total_payable += contract[i].get_salary();
//    }
//    for (int i = 0; i < person.size(); i++)
//    {
//        total_unpaid += person[i].get_bill();
//    }
//
//    cout << "Total Sales = " << total_sale << "\nTotal Profit = " << total_profit << "\nTotal Payable Dues to Suppliers = " << total_payable_due << "\nTotal Payable Salaries = " << total_payable << "\nTotal Recievable Dues = " << total_unpaid << "\nTotal Unpaid = " << total_unpaid << "\nNet Profit(Without Unpaid Dues) = " << total_profit - (total_payable + total_payable_due) << "\nNet Profit(With Every thing Paid) = " << (total_profit + total_unpaid) - (total_payable + total_payable_due) << endl;
//
//
//}
//
//// int order_id = 0;
//// int id = 0;
//int main()
//{
//
//    vector<cloth> cloth_type;
//    // cloth temp_cloth(101, "Parachute", 100, 30000);
//    // cloth_type.push_back(temp_cloth);
//    // save_cloth(temp_cloth);
//    // cloth temp_cloth1(101, "Silver", 101, 30000);
//    // cloth_type.push_back(temp_cloth1);
//    // save_cloth(temp_cloth1);
//    // cloth temp_cloth2(101, "Valvet", 102, 30000);
//    // save_cloth(temp_cloth2);
//    // cloth_type.push_back(temp_cloth2);
//    // cloth temp_cloth3(101, "PVC", 103, 30000);
//    // save_cloth(temp_cloth3);
//    // cloth_type.push_back(temp_cloth3);
//
//
//    load_cloth(cloth_type);
//
//    vector<customer> person;
//    // customer temp_person("Ali", "03265201092",100);
//    // person.push_back(temp_person);
//    // save_customer(temp_person);
//    // customer temp_person1("Ahmad", "03264207056",101);
//    // person.push_back(temp_person1);
//    // save_customer(temp_person1);
//    // customer temp_person2("Asad", "03265523456",102);
//    // person.push_back(temp_person2);
//    // save_customer(temp_person2);
//    // customer temp_person3("Akbar", "03201096522",103);
//    // person.push_back(temp_person3);
//    // save_customer(temp_person3);
//    // customer temp_person4("Huzaifa", "03265910202",104);
//    // person.push_back(temp_person4);
//    // save_customer(temp_person4);
//
//    load_customer(person);
//
//    vector<type1_car> car1;
//    type1_car temp_car1(100, 50, cloth_type[0]);
//    car1.push_back(temp_car1);
//    save_car1(temp_car1);
//    load_car1(car1, cloth_type);
//
//
//    vector<type2_car> car2;
//    type2_car temp_car2(100, 50, cloth_type[0]);
//    car2.push_back(temp_car2);
//    save_car2(temp_car2);
//    load_car2(car2, cloth_type);
//
//    vector<type3_car> car3;
//    type3_car temp_car3(100, 50, cloth_type[0]);
//    car3.push_back(temp_car3);
//    save_car3(temp_car3);
//    load_car3(car3, cloth_type);
//
//    vector<type4_car> car4;
//    type4_car temp_car4(100, 50, cloth_type[0]);
//    car4.push_back(temp_car4);
//    save_car4(temp_car4);
//    load_car4(car4, cloth_type);
//
//    vector<supplier> supply_person;
//    supplier temp_supplier("Ali-Brothers", "03114578954", 100, 0);
//    supply_person.push_back(temp_supplier);
//    save_supplier(temp_supplier);
//
//    supplier temp_supplier1("Khan-Brothers", "03118954574", 101, 0);
//    supply_person.push_back(temp_supplier1);
//    save_supplier(temp_supplier1);
//    supplier temp_supplier2("Itefaq-Dura", "03114578954", 102, 0);
//    supply_person.push_back(temp_supplier2);
//    save_supplier(temp_supplier2);
//    load_supplier(supply_person);
//
//    vector<employee> employee_person;
//    employee temp_employee("Ahmad", "03114578954", 100, 40);
//    employee_person.push_back(temp_employee);
//    save_employee(temp_employee);
//    load_employee(employee_person);
//
//    vector<sales_employee> employee_sales;
//    sales_employee temp_sales("Raheel", "03117854594", 100, 40, 20);
//    employee_sales.push_back(temp_sales);
//    save_sales_employee(temp_sales);
//    load_sales_employee(employee_sales);
//
//
//
//    vector<hourly_employee> employee_hourly;
//    hourly_employee temp_hourly("Faisal", "03189514574", 100, 40, 10);
//    employee_hourly.push_back(temp_hourly);
//    save_hourly_employee(temp_hourly);
//    load_hourly_employee(employee_hourly);
//
//    vector<contract_employee> employee_contract;
//    contract_employee temp_contract("Zubair", "03114895754", 100, 40, 30);
//    employee_contract.push_back(temp_contract);
//    save_contract_employee(temp_contract);
//    load_contract_employee(employee_contract);
//
//    vector<sales_oder> sales_order;
//    load_sales_order(sales_order, person, car1, car2, car3, car4);
//    vector<purchase_order> order_perchase;
//
//    int customer_size = 5;
//    int cloth_size = 4;
//    int car1_size = 1;
//    int car2_size = 1;
//    int car3_size = 1;
//    int car4_size = 1;
//    int supplier_size = 3;
//    int sales_order_size = 0;
//    int purchase_order_size = 0;
//    int employee_size = 1;
//    int sales_employee_size = 1;
//    int contract_employee_size = 1;
//    int hourly_employee_size = 1;
//    for (;;)
//    {
//
//        cout << "\n\n\n\n\nMain Menu\n"
//            << "Customer menu     1\n"
//            << "Inventry menu     2\n"
//            << "Employee menu     3\n"
//            << "Exit              E\n"
//            << "Enter your Choice = \n";
//        char choice;
//        cin >> choice;
//        cout << "\n\n\n\n\n";
//
//        if (choice == '1')
//        {
//            for (;;)
//            {
//                cout << "\n\n\n\n\n";
//                cout << "Customer Menu\n"
//                    << "New Order                1"
//                    << "\nAdd Customer             2"
//                    << "\nView Customer            3"
//                    << "\nView Sales Order         4\n"
//                    << "View all Sales Orders    5"
//                    << "\nView all Customers       6\n"
//                    << "Back                     M\n"
//                    << "Enter Your Choice = ";
//
//                cin >> choice;
//                cout << "\n\n\n\n\n";
//                if (choice == '1')
//                {
//                    if ((customer_size < 1) && (cloth_size < 1) && (car1_size < 1) && (car2_size < 1) && (car3_size < 1) && (car4_size < 1))
//                    {
//                        cout << "Uexpected Error Occured\n";
//                    }
//                    else
//                    {
//                        for (;;)
//                        {
//
//                            cout << "Enter Customer Id = ";
//                            int tid;
//                            cin >> tid;
//                            if (tid < (customer_size + 100) && tid >= 100)
//                            {
//
//                                for (;;)
//                                {
//                                    cout << "Enter Type 1 Car ID = ";
//                                    int car1_id;
//                                    cin >> car1_id;
//                                    if (car1_id < (car1_size + 100) && car1_id >= 100)
//                                    {
//                                        for (;;)
//                                        {
//                                            cout << "Enter Type 1 Car ID = ";
//                                            int car2_id;
//                                            cin >> car2_id;
//                                            if (car2_id < (car2_size + 100) && car2_id >= 100)
//                                            {
//                                                for (;;)
//                                                {
//                                                    cout << "Enter Type 1 Car ID = ";
//                                                    int car3_id;
//                                                    cin >> car3_id;
//                                                    if (car3_id < (car3_size + 100) && car3_id >= 100)
//                                                    {
//                                                        for (;;)
//                                                        {
//                                                            cout << "Enter Type 1 Car ID = ";
//                                                            int car4_id;
//                                                            cin >> car4_id;
//                                                            if (car4_id < (car4_size + 100) && car4_id >= 100)
//                                                            {
//                                                                sales_order_size++;
//                                                                person[tid - 100].add_order(tid);
//                                                                sales_oder temp_o(person[tid - 100], car1[car1_id - 100], car2[car2_id - 100], car3[car3_id - 100], car4[car4_id - 100]);
//                                                                sales_order.push_back(temp_o);
//                                                                break;
//                                                            }
//                                                            else
//                                                            {
//                                                                cout << "Invalid Type 4 Car Id Entered!\n";
//                                                            }
//                                                        }
//                                                        break;
//                                                    }
//                                                    else
//                                                    {
//                                                        cout << "Invalid Type 3 Car Id Entered!\n";
//                                                    }
//                                                }
//                                                break;
//                                            }
//                                            else
//                                            {
//                                                cout << "Invalid Type 2 Car Id Entered!\n";
//                                            }
//                                        }
//                                        break;
//                                    }
//                                    else
//                                    {
//                                        cout << "Invalid Type 1 Car Id Entered!\n";
//                                    }
//                                }
//
//                                break;
//                            }
//                            else
//                            {
//                                cout << "Invalid Customer Id Entered!\n";
//                            }
//                        }
//                    }
//                }
//                else if (choice == '2')
//                {
//                    customer_size++;
//                    cout << "Enter Customer Name = ";
//                    string name;
//                    cin >> name;
//                    cout << "Enter Customer's Phone Number = ";
//                    string phone;
//                    cin >> phone;
//                    cout << "Cusotmer Registered Successfully!\nName = " << name << "\nPhone Number = " << phone << endl;
//                    customer temp_c(name, phone, customer_size);
//                    person.push_back(temp_c);
//                }
//                else if (choice == '3')
//                {
//                    for (;;)
//                    {
//
//                        cout << "Enter Coustomer Id = ";
//                        int id;
//                        cin >> id;
//                        if ((id >= 100) && (id < (customer_size + 100)))
//                        {
//                            person[id - 100].display();
//                            break;
//                        }
//                        else
//                        {
//                            cout << "Invalid Id entered!" << endl;
//                        }
//                    }
//                }
//                else if (choice == '4')
//                {
//                    for (;;)
//                    {
//                        cout << "Enter Order Id = ";
//                        int id;
//                        cin >> id;
//                        if ((id >= 100) && (id < (sales_order_size + 100)))
//                        {
//                            if (sales_order_size < 1)
//                            {
//                                cout << "No Order made yet!\nMake an order first\n";
//                                break;
//                            }
//                            else
//                            {
//                                sales_order[id - 100].display();
//                                break;
//                            }
//                        }
//                        else
//                        {
//                            cout << "Invalid Id entered!" << endl;
//                        }
//                    }
//                }
//                else if (choice == '5')
//                {
//                    for (int i = 0; i < sales_order_size; i++)
//                    {
//                        sales_order[i].display();
//                    }
//                }
//                else if (choice == '6')
//                {
//
//                    for (int i = 0; i < customer_size; i++)
//                    {
//                        person[i].display();
//                    }
//                }
//                else if (choice == 'm' || choice == 'M')
//                {
//                    cout << "Exiting to main menu!\n";
//                    break;
//                }
//                else
//                {
//                    cout << "Invalid Choice Entered!\n";
//                }
//            }
//        }
//        else if (choice == '2')
//        {
//            for (;;)
//            {
//                cout << "\n\n\n\n\n";
//                cout << "Inventry Menu\n"
//                    << "Add New Cloth Type       1\n"
//                    << "Add New Car              2\n"
//                    << "Add Suplier              3\n"
//                    << "Add Purchase Order       4\n"
//                    << "View items               5\n"
//                    << "Back                     M\n";
//                cout << "Enter your Choice = ";
//                cin >> choice;
//                cout << "\n\n\n\n\n";
//                if (choice == 'm' || choice == 'M')
//                {
//                    cout << "Returning to Main Menu!\n";
//                    break;
//                }
//                else if (choice == '1')
//                {
//                    cout << "Enter Cloth Name = ";
//                    string name;
//                    cin >> name;
//                    cout << "Enter Cloth Price = ";
//                    int price;
//                    cin >> price;
//                    cout << "Enter the Length of the cloth = ";
//                    double length;
//                    cin >> length;
//                    cloth temp_cloth(cloth_size, name, price, length);
//                    cloth_type.push_back(temp_cloth);
//                    cloth_size++;
//                    cout << "Cloth Added Successfully!\nCloth Id = " << cloth_size << "\nName = " << name << "\nPrice = " << price << "\nLength = " << length << endl;
//                }
//                else if (choice == '2')
//                {
//                    for (;;)
//                    {
//
//                        cout << "Enter Type of Car = ";
//                        int type;
//                        cin >> type;
//                        if (type == 1)
//                        {
//                            for (;;)
//                            {
//
//                                cout << "Enter Cloth Id = ";
//                                int id;
//                                cin >> id;
//                                if (id >= 100 && id < cloth_size)
//                                {
//
//                                    cout << "Enter Quantity of Covers = ";
//                                    int quantity;
//                                    cin >> quantity;
//                                    type1_car temp_c1((car1_size - 1), quantity, cloth_type[id - 100]);
//                                    cout << "Car Added Successfully!\nCover Id = " << car1_size << "\nQuantity = " << quantity << "\nCover Price = " << temp_c1.get_price() << "\nProfit = " << temp_c1.get_total_price();
//                                    car1_size++;
//                                    break;
//                                }
//                                else
//                                {
//                                    cout << "Invalid Id entered!\n";
//                                }
//                            }
//                            break;
//                        }
//                        else if (type == 3)
//                        {
//                            cout << "Enter Cloth Id = ";
//                            int id;
//                            cin >> id;
//                            cout << "Enter Quantity of Covers = ";
//                            int quantity;
//                            cin >> quantity;
//                            type3_car temp_c3((car3_size - 1), quantity, cloth_type[id - 100]);
//                            cout << "Car Added Successfully!\nCover Id = " << car3_size << "\nQuantity = " << quantity << "\nCover Price = " << temp_c3.get_price() << "\nProfit = " << temp_c3.get_total_price();
//                            car3_size++;
//                            break;
//                        }
//                        else if (type == 4)
//                        {
//                            cout << "Enter Cloth Id = ";
//                            int id;
//                            cin >> id;
//                            cout << "Enter Quantity of Covers = ";
//                            int quantity;
//                            cin >> quantity;
//                            type4_car temp_c4((car4_size - 1), quantity, cloth_type[id - 100]);
//                            cout << "Car Added Successfully!\nCover Id = " << car4_size << "\nQuantity = " << quantity << "\nCover Price = " << temp_c4.get_price() << "\nProfit = " << temp_c4.get_total_price();
//                            car4_size++;
//                            break;
//                        }
//                        else if (type == 2)
//                        {
//                            cout << "Enter Cloth Id = ";
//                            int id;
//                            cin >> id;
//                            cout << "Enter Quantity of Covers = ";
//                            int quantity;
//                            cin >> quantity;
//                            type2_car temp_c2((car2_size - 1), quantity, cloth_type[id - 100]);
//                            cout << "Car Added Successfully!\nCover Id = " << car2_size << "\nQuantity = " << quantity << "\nCover Price = " << temp_c2.get_price() << "\nProfit = " << temp_c2.get_total_price() << endl;
//                            car2_size++;
//                            break;
//                        }
//                        else
//                        {
//                            cout << "Invalid Type Entered!\n";
//                        }
//                    }
//                }
//                else if (choice == '3')
//                {
//                    cout << "Enter Supplier Name = ";
//                    string name;
//                    cin >> name;
//                    cout << "Enter Phone Number = ";
//                    string phone;
//                    cin >> phone;
//                    supplier temp_s(name, phone, supplier_size + 100, 0);
//                    supply_person.push_back(temp_s);
//                    cout << "Supplier Added Successfully!\nName = " << name << "\nPhone Number = " << phone << "\nID = " << supplier_size + 100 << endl;
//                    supplier_size++;
//                }
//                else if (choice == '4')
//                {
//                    cout << "Enter Supplier ID = ";
//                    int id;
//                    cin >> id;
//                    id -= 100;
//                    for (;;)
//                    {
//
//                        cout << "Enter the number of types of clotes purchased = ";
//                        int num;
//                        cin >> num;
//                        if (num > cloth_size)
//                        {
//                            cout << "Error Number exceeded the available clothes!\nAvailable clothes = " << cloth_size << endl;
//                        }
//                        else
//                        {
//
//                            vector<cloth> arr;
//                            vector<double> len;
//                            for (int i = 0; i < num; i++)
//                            {
//                                cout << "Select Cloth Type = \n";
//
//                                for (int j = 0; j < cloth_size; j++)
//                                {
//                                    cout << j + 1 << ". " << cloth_type[j].get_name() << endl;
//                                }
//                                int index;
//                                cout << "Enter Your Choice = ";
//                                cin >> index;
//                                index--;
//                                arr.push_back(cloth_type[index]);
//                                cout << "Enter its length = ";
//                                double l;
//                                cin >> l;
//                                len.push_back(l);
//                            }
//                            purchase_order temp_purchase(purchase_order_size + 100, len, supply_person[id], arr, num);
//                            order_perchase.push_back(temp_purchase);
//                            break;
//                        }
//                    }
//                    purchase_order_size++;
//                }
//                else if (choice == '5')
//                {
//                    for (;;)
//                    {
//
//                        cout << "\n\n\n\n\n\n";
//                        cout << "View all Cloth Types           1\n"
//                            << "View All Purchase Orders       2\n"
//                            << "View All Cars                  3\n"
//                            << "View All Suppliers             4\n"
//                            << "Return to Inventory Menu       M\n"
//                            << "Enter your Choice = ";
//
//                        cin >> choice;
//                        cout << "\n\n\n\n\n\n";
//                        if (choice == 'm' || choice == 'M')
//                        {
//                            cout << "Exiting to Inventry Menu." << endl;
//                            break;
//                        }
//                        else if (choice == '1')
//                        {
//                            for (int i = 0; i < cloth_size; i++)
//                            {
//                                cloth_type[i].display();
//                            }
//                        }
//                        else if (choice == '3')
//                        {
//                            cout << "TYPE 1 = \n\n\n\n\n";
//                            for (int i = 0; i < car1_size; i++)
//                            {
//                                car1[i].display();
//                            }
//
//                            cout << "TYPE 2 = \n\n\n\n\n";
//                            for (int i = 0; i < car1_size; i++)
//                            {
//                                car2[i].display();
//                            }
//
//                            cout << "TYPE 3 = \n\n\n\n\n";
//                            for (int i = 0; i < car1_size; i++)
//                            {
//                                car3[i].display();
//                            }
//
//                            cout << "TYPE 4 = \n\n\n\n\n";
//                            for (int i = 0; i < car1_size; i++)
//                            {
//                                car4[i].display();
//                            }
//                        }
//                        else if (choice == '2')
//                        {
//                            if (purchase_order_size > 0)
//                            {
//
//                                for (int i = 0; i < purchase_order_size; i++)
//                                {
//                                    order_perchase[i].display();
//                                }
//                            }
//                            else
//                            {
//                                cout << "No Purchase Order made yet!\n";
//                            }
//                        }
//                        else if (choice == '4')
//                        {
//                            for (int i = 0; i < supplier_size; i++)
//                            {
//                                supply_person[i].display();
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        else if (choice == '3')
//        {
//            for (;;)
//            {
//                cout << "\n\n\n\n\n\n";
//                cout << "Employee Menu\n"
//                    << "Add a New Employee     1\n"
//                    << "View an Employee       2\n"
//                    << "Exit                   E\n";
//                cout << "Enter you Choice = ";
//                cin >> choice;
//                cout << "\n\n\n\n\n\n";
//                if (choice == 'm' || choice == 'M')
//                {
//                    cout << "Exiting to Main Menu!\n";
//                    break;
//                }
//                else if (choice == '1')
//                {
//                    for (;;)
//                    {
//                        cout << "\n\n\n\n\n\n";
//                        cout << "Select Type of Employee =\n "
//                            << "Sipmle Employee      1\n"
//                            << "Sales Employee       1\n"
//                            << "Hourly Employee      1\n"
//                            << "Contract Employee    1\n"
//                            << "Back                 B\n"
//                            << "Enter your Choice = ";
//                        char type;
//                        cin >> type;
//                        cout << "\n\n\n\n\n\n";
//                        if (type == '1')
//                        {
//                            cout << "Enter Name = ";
//                            string name;
//                            cin >> name;
//                            cout << "Enter Phone Number = ";
//                            string phone;
//                            cin >> phone;
//                            cout << "Enter Age = ";
//                            float age;
//                            cin >> age;
//
//                            employee temp_e(name, phone, employee_size, age);
//                            employee_person.push_back(temp_e);
//                            cout << "Employee Added Successfully!\nName = " << name << "\nPhone Number = " << phone << "\nAge = " << age << endl;
//                            employee_size++;
//                            break;
//                        }
//                        else if (type == '2')
//                        {
//                            cout << "Enter Name = ";
//                            string name;
//                            cout << "Enter Phone Number = ";
//                            string phone;
//                            cin >> name;
//                            cout << "Enter Age = ";
//                            float age;
//                            cin >> age;
//
//                            sales_employee temp_s(name, phone, sales_employee_size, age, 0);
//                            employee_sales.push_back(temp_s);
//                            cout << "Employee Added Successfully!\nName = " << name << "\nPhone Number = " << phone << "\nAge = " << age << endl;
//                            sales_employee_size++;
//                            break;
//                        }
//                        else if (type == '3')
//                        {
//                            cout << "Enter Name = ";
//                            string name;
//                            cout << "Enter Phone Number = ";
//                            string phone;
//                            cin >> name;
//                            cout << "Enter Age = ";
//                            float age;
//                            cin >> age;
//
//                            hourly_employee temp_h(name, phone, hourly_employee_size, age, 0);
//                            employee_hourly.push_back(temp_h);
//                            cout << "Employee Added Successfully!\nName = " << name << "\nPhone Number = " << phone << "\nAge = " << age << endl;
//                            hourly_employee_size++;
//                            break;
//                        }
//                        else if (type == '4')
//                        {
//                            cout << "Enter Name = ";
//                            string name;
//                            cout << "Enter Phone Number = ";
//                            string phone;
//                            cin >> name;
//                            cout << "Enter Age = ";
//                            float age;
//                            cin >> age;
//
//                            contract_employee temp_c(name, phone, contract_employee_size, age, 0);
//                            employee_contract.push_back(temp_c);
//                            cout << "Employee Added Successfully!\nName = " << name << "\nPhone Number = " << phone << "\nAge = " << age << endl;
//                            contract_employee_size++;
//                            break;
//                        }
//                        else if (type == 'b' || type == 'B')
//                        {
//                            cout << "Exiting to Employee Menu!\n";
//                            break;
//                        }
//                        else
//                        {
//                            cout << "Invalid Type Entered!\n";
//                        }
//                    }
//                }
//                else if (choice == '2')
//                {
//                    for (;;)
//                    {
//
//                        cout << "\n\n\n\n\n\n";
//                        cout << "Select Type of Employee =\n "
//                            << "Sipmle Employee      1\n"
//                            << "Sales Employee       1\n"
//                            << "Hourly Employee      1\n"
//                            << "Contract Employee    1\n"
//                            << "Back                 B\n"
//                            << "Enter your Choice = ";
//                        char type;
//                        cin >> type;
//                        cout << "\n\n\n\n\n\n";
//                        if (type == '1')
//                        {
//
//                            cout << "Enter Employee ID = ";
//                            int id;
//                            cin >> id;
//                            employee_person[id - 100].display();
//                            for (;;)
//                            {
//
//                                cout << "Edit Employee Data = \n"
//                                    << "Give Bonus        1\n"
//                                    << "Edit Name         1\n"
//                                    << "Edit Phone        1\n"
//                                    << "Edit Age          1\n"
//                                    << "Enter your choice = ";
//                                cin >> choice;
//                                if (choice == 'b' || choice == 'B')
//                                {
//                                    cout << "Exiting to Employee Menu!\n";
//                                    break;
//                                }
//                                else if (choice == 1)
//                                {
//                                    cout << "Enter percentage of Bonus to Give = ";
//                                    float bonus;
//                                    cin >> bonus;
//                                    bonus /= 100;
//                                    bonus += 1;
//                                    employee_person[id - 100].give_bonus(bonus);
//                                }
//                                else if (choice == 2)
//                                {
//                                    cout << "Enter New Name = ";
//                                    string name;
//                                    cin >> name;
//                                    employee_person[id - 100].set_name(name);
//                                }
//                                else if (choice == 3)
//                                {
//                                    cout << "Enter New Number = ";
//                                    string num;
//                                    cin >> num;
//                                    employee_person[id - 100].set_phone(num);
//                                }
//                                else if (choice == 4)
//                                {
//                                    cout << "Enter New Number = ";
//                                    float num;
//                                    cin >> num;
//                                    employee_person[id - 100].set_age(num);
//                                }
//                            }
//
//                            break;
//                        }
//                        else if (type == '2')
//                        {
//                            cout << "Enter Employee ID = ";
//                            int id;
//                            cin >> id;
//                            employee_person[id - 100].display();
//                            for (;;)
//                            {
//
//                                cout << "\n\n\n\n\n\n";
//                                cout << "Edit Employee Data = \n"
//                                    << "Enter Sales        1\n"
//                                    << "Edit Name         2\n"
//                                    << "Edit Phone        3\n"
//                                    << "Edit Age          4\n"
//                                    << "Back              B\n"
//                                    << "Enter your choice = ";
//                                cin >> choice;
//                                cout << "\n\n\n\n\n\n";
//                                if (choice == 'b' || choice == 'B')
//                                {
//                                    cout << "Exiting to Employee Menu!\n";
//                                    break;
//                                }
//                                else if (choice == '1')
//                                {
//                                    cout << "Enter Number of sales given by the Employee = ";
//                                    int sales;
//                                    cin >> sales;
//
//                                    employee_sales[id - 100].set_sales(sales);
//                                }
//                                else if (choice == '2')
//                                {
//                                    cout << "Enter New Name = ";
//                                    string name;
//                                    cin >> name;
//                                    employee_sales[id - 100].set_name(name);
//                                }
//                                else if (choice == '3')
//                                {
//                                    cout << "Enter New Number = ";
//                                    string num;
//                                    cin >> num;
//                                    employee_sales[id - 100].set_phone(num);
//                                }
//                                else if (choice == '4')
//                                {
//                                    cout << "Enter New Number = ";
//                                    float num;
//                                    cin >> num;
//                                    employee_sales[id - 100].set_age(num);
//                                }
//                            }
//                        }
//                        else if (type == '3')
//                        {
//                            cout << "Enter Employee ID = ";
//                            int id;
//                            cin >> id;
//                            employee_person[id - 100].display();
//                            for (;;)
//                            {
//
//                                cout << "\n\n\n\n\n\n";
//                                cout << "Edit Employee Data = \n"
//                                    << "Enter Hours worked 1\n"
//                                    << "Edit Name          2\n"
//                                    << "Edit Phone         3\n"
//                                    << "Edit Age           4\n"
//                                    << "Back               B\n"
//                                    << "Enter your choice = ";
//                                cin >> choice;
//                                cout << "\n\n\n\n\n\n";
//                                if (choice == 'b' || choice == 'B')
//                                {
//                                    cout << "Exiting to Employee Menu!\n";
//                                    break;
//                                }
//                                else if (choice == '1')
//                                {
//                                    cout << "Enter Number of hours worked by the Employee = ";
//                                    int hours;
//                                    cin >> hours;
//                                    employee_hourly[id - 100].set_hours_worked(hours);
//                                }
//                                else if (choice == '2')
//                                {
//                                    cout << "Enter New Name = ";
//                                    string name;
//                                    cin >> name;
//                                    employee_hourly[id - 100].set_name(name);
//                                }
//                                else if (choice == '3')
//                                {
//                                    cout << "Enter New Number = ";
//                                    string num;
//                                    cin >> num;
//                                    employee_hourly[id - 100].set_phone(num);
//                                }
//                                else if (choice == '4')
//                                {
//                                    cout << "Enter New Age = ";
//                                    float num;
//                                    cin >> num;
//                                    employee_hourly[id - 100].set_age(num);
//                                }
//                            }
//                        }
//                        else if (type == '4')
//                        {
//                            cout << "Enter Employee ID = ";
//                            int id;
//                            cin >> id;
//                            employee_person[id - 100].display();
//                            for (;;)
//                            {
//
//                                cout << "\n\n\n\n\n\n";
//                                cout << "Edit Employee Data = \n"
//                                    << "Enter Covers made 1\n"
//                                    << "Edit Name         2\n"
//                                    << "Edit Phone        3\n"
//                                    << "Edit Age          4\n"
//                                    << "Back              B\n"
//                                    << "Enter your choice = ";
//                                cin >> choice;
//                                cout << "\n\n\n\n\n\n";
//                                if (choice == 'b' || choice == 'B')
//                                {
//                                    cout << "Exiting to Employee Menu!\n";
//                                    break;
//                                }
//                                else if (choice == '1')
//                                {
//                                    cout << "Enter Number of covers maden by the Employee = ";
//                                    int covers;
//                                    cin >> covers;
//                                    employee_contract[id - 100].set_covers_made(covers);
//                                }
//                                else if (choice == '2')
//                                {
//                                    cout << "Enter New Name = ";
//                                    string name;
//                                    cin >> name;
//                                    employee_contract[id - 100].set_name(name);
//                                }
//                                else if (choice == '3')
//                                {
//                                    cout << "Enter New Number = ";
//                                    string num;
//                                    cin >> num;
//                                    employee_contract[id - 100].set_phone(num);
//                                }
//                                else if (choice == '4')
//                                {
//                                    cout << "Enter New Number = ";
//                                    float num;
//                                    cin >> num;
//                                    employee_contract[id - 100].set_age(num);
//                                }
//                            }
//                        }
//                        else if (choice == 'b' || choice == 'B')
//                        {
//                            cout << "Exiting to Employee Menu!\n";
//                            break;
//                        }
//                        else
//                        {
//                            cout << "Invalid Type Entered!\n";
//                        }
//                    }
//                }
//            }
//        }
//        else if (choice == 'E' || choice == 'e')
//        {
//            cout << "Exiting program!" << endl;
//            return 0;
//        }
//    }
//    return 0;
//}
