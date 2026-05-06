#include <iostream>
using namespace std;
int main()
{
	int id[] = { 141, 116, 144, 107, 127, 115, 123, 112, 133, 130,108, 125, 128, 104, 109, 135, 111, 124, 132, 103,120, 117, 137, 149, 110, 121, 126, 106, 143, 129,134, 148, 113, 138, 119, 145, 122, 150, 118, 136,101, 140, 146, 102, 114, 131, 142, 105, 100, 147 };
	float quantity[] = { 15, 65, 30, 80, 55, 95, 45, 85, 50, 20,10, 75, 60, 40, 70, 90, 25, 35, 100, 50,60, 80, 15, 40, 30, 45, 20, 90, 70, 95,10, 85, 65, 100, 50, 75, 60, 25, 35, 55,90, 20, 40, 80, 10, 50, 75, 25, 85, 70 };
	float total[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float price[] = { 25, 5, 40, 10, 45, 30, 50, 5, 35, 20,15, 40, 10, 30, 45, 25, 50, 35, 5, 20,30, 50, 15, 10, 25, 40, 35, 45, 50, 5,30, 15, 50, 10, 40, 25, 5, 20, 45, 35,30, 25, 40, 10, 50, 15, 5, 45, 20, 35 };
	char category[] = { 'O', 'E', 'F', 'T', 'C', 'C', 'F', 'E', 'T', 'O','E', 'F', 'O', 'T', 'C', 'C', 'F', 'O', 'T', 'E','C', 'F', 'O', 'E', 'T', 'T', 'O', 'C', 'F', 'E','O', 'C', 'T', 'F', 'E', 'O', 'F', 'C', 'T', 'E','O', 'F', 'T', 'C', 'E', 'C', 'T', 'O', 'F', 'E' };
	char func;
	int size_i = sizeof(id) / sizeof(id[0]);
	int size_q = sizeof(quantity) / sizeof(quantity[0]);
	int size_t = sizeof(total) / sizeof(total[0]);
	int size_p = sizeof(price) / sizeof(price[0]);
	int size_c = sizeof(category) / sizeof(category[0]);
	for (int i = 0; i < size_i; i++)
	{
		total[i] = quantity[i] * price[i];
	}

	for (;;)
	{
		cout << "                         MAIN MENU" << endl;
		cout << "__________________________________________________________________________" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Display products on basis of product id (ascending order).   | PRESS A |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Display products on basis of product id (descending order).  | PRESS B |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Display products on basis of total value (accending order).  | PRESS C |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Display products on basis of total value (descending order). | PRESS D |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Add new product record.                                      | PRESS F |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Delete a product.                                            | PRESS G |" << endl; 
		cout << "|                                                              |         | " << endl;
		cout << "| Display product with quantity greater than x(Ascending).     | PRESS H |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Display product with quantity greater than x(decending).     | PRESS I.|" << endl; 
		cout << "|                                                              |         | " << endl;
		cout << "| Display product with total value greater than x(Ascending).  | PRESS J |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Display product with total value greater than x(decending).  | PRESS K |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "| Update a product.                                            | PRESS L |" << endl;
		cout << "|                                                              |         | " << endl;
		cout << "|______________________________________________________________|_________|" << endl;
		cout << endl;
		cout << "Enter your choice = ";
		cin >> func;

		if (func == 'e' || func == 'E')
		{
			break;
		}
		else if (func == 'a' || func=='A')//running function 1
		{
			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;
			for (int i = 0; i < size_i; i++)//sorting in assending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (id[j] > id[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			//printing arrays
			for (int i = 0; i < size_i; i++)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			//asking to go to main menu
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;
		}
		else if (func == 'b' || func == 'B')//running function 2
		{
			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;
			for (int i = 0; i < size_i; i++)//sorting in desending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (id[j] < id[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			for (int i = 0; i < size_i; i++)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;

		}
		else if (func == 'c' || func == 'C')//running function 3
		{
			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;
			for (int i = 0; i < size_i; i++)//sorting in assending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (total[j] > total[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			for (int i = 0; i < size_i; i++)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;

		}
		else if (func == 'd' || func == 'D')//running function 4
		{
			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;
			for (int i = 0; i < size_i; i++)
			{
				for (int j = 0; j < size_i - i - 1; j++)
				{
					if (total[j] < total[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			for (int i = 0; i < size_i; i++)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;

		}
		else if (func == 'f' || func == 'F')
		{
			for (;;)
			{
				float new_quantity, new_price, new_total;
				int new_id;
				char new_category;
				//checking for dublicate id
				for (;;)
				{
					int z = 0;
					cout << "Enter product id = ";
					cin >> new_id;
					for (int i = 0; i < size_i; i++)
					{
						if (new_id == id[i])
						{
							cout<<"ERROR!"<<endl << "Id exists! enter a different id."<<endl;
							break;
						}
						else
						{
							z++;
						}
					}
					if (z == size_i)
					{
						break;
					}
					
				}
				cout << "Enter product quantity = ";
				cin >> new_quantity;
				cout << "Enter unit price = ";
				cin >> new_price;
				cout << "Enter product category = ";
				cin >> new_category;
				if (new_id < 1)
				{
					cout << "Invalid input";
				}
				else
				{
					size_i++;
					size_q++;
					size_t++;
					size_p++;
					size_c++;
					new_total = new_quantity*new_price;
					//adding values
					id[size_i-1] = new_id;
					quantity[size_q-1] = new_quantity;
					price[size_p-1] = new_price;
					category[size_c-1] = new_category;
					total[size_t-1] = new_total;
					
				

					//updating size of arrays
					
					
					 cout << "Product added succesfully." << endl<<endl;
					 
					char c;
					cout << "Add more product.Press A"<<endl;
					cout << "Back to main menu.Press M" << endl;
					cin >> c;
					if (c == 'm' || c == 'M')
					{
						break;
					}
					
					
				}

			}



		}
		else if (func == 'g' || func == 'G')
		{
			int del, c;
			cout << "enter the target to be deleted = ";
			cin >> del;
			for (int i = 0; i < size_i; i++)
			{
				if (del == id[i])
				{
					c = i;
					break;
				}

			}
			for (int j = c; j < size_i; j++)
			{
				int tempr = id[j];//deleting id
				id[j] = id[j + 1];
				id[j + 1] = tempr;

				float temp = quantity[j];//deleting quantity
				quantity[j] = quantity[j + 1];
				quantity[j + 1] = temp;

				temp = price[j];//deleting  price
				price[j] = price[j + 1];
				price[j + 1] = temp;

				temp = total[j];//deleting  total value
				total[j] = total[j + 1];
				total[j + 1] = temp;

				char tempo = category[j];//deleting category
				category[j] = category[j + 1];
				category[j + 1] = tempo;
			}
			size_i--;
			size_q--;
			size_t--;
			size_p--;
			size_c--;
			cout << "Deleted successfully."<<endl;
			char w;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> w;
		}
		else if (func == 'h' || func == 'H')//displaying the quantity less than x assecding
		{
			
			int b;
			cout << "Enter the quantity x = ";
			cin >> b;
			for (int i = 0; i < size_i; i++)//sorting in assending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (id[j] > id[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			int low = 0, high = size_q - 1,mid;
			while (low <= high) {
				mid = (low + high) / 2;  


				if (quantity[mid] == b)
				{										
					break;
				}
				else if (b < quantity[mid]) 
				{					
					high = mid - 1;  
				}
				else
				{
					low = mid + 1;   
				}

			}

			
			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;
			for (int i = size_q-1; i >=mid ; i--)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;
		}
		else if (func == 'i' || func == 'I')//displaying quantity less than x decending
		{
			
			int b;
			cout << "Enter the quantity x = ";
			cin >> b;
			for (int i = 0; i < size_i; i++)//sorting in assending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (id[j] > id[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			int low = 0, high = size_q - 1, mid;
			while (low <= high) {
				mid = (low + high) / 2;


				if (quantity[mid] == b)
				{
					break;
				}
				else if (b < quantity[mid])
				{
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}

			}

			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			for (int i =mid ; i < size_i; i++)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}

			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;

		}
		else if (func == 'j' || func == 'J')//displaying total valuue less than x ascending
		{
			
			int b;
			cout << "Enter the total value x = ";
			cin >> b;
			for (int i = 0; i < size_i; i++)//sorting in assending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (total [j] > total[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			int low = 0, high = size_t - 1, mid;
			while (low <= high) {
				mid = (low + high) / 2;


				if (total[mid] == b)
				{
					break;
				}
				else if (b < total[mid])
				{
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}

			}

			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			for (int i = mid; i < size_i; i++)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
					cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;


		}
		else if (func == 'k' || func == 'K')
		{
			
			int b;
			cout << "Enter the total value x = ";
			cin >> b;
			for (int i = 0; i < size_i; i++)//sorting in assending
			{
				for (int j = 0; j < size_i - i - 1; j++)//sorting each 2 index 
				{
					if (total[j] > total[j + 1])
					{
						int tempr = id[j];//sorting id
						id[j] = id[j + 1];
						id[j + 1] = tempr;

						float temp = quantity[j];//sorting quantity
						quantity[j] = quantity[j + 1];
						quantity[j + 1] = temp;

						temp = price[j];//sorting price
						price[j] = price[j + 1];
						price[j + 1] = temp;

						temp = total[j];//sorting total value
						total[j] = total[j + 1];
						total[j + 1] = temp;

						char tempo = category[j];//sorting category
						category[j] = category[j + 1];
						category[j + 1] = tempo;
					}
				}
			}
			int low = 0, high = size_t - 1, mid;
			while (low <= high) {
				mid = (low + high) / 2;


				if (total[mid] == b)
				{
					break;
				}
				else if (b < total[mid])
				{
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}

			}

			cout << "_______________________________________________________________________" << endl;
			cout << "| Product id  |  Quantity  | Unit Price  | Total value  |  Category   |" << endl;
			cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			for (int i = size_t-1; i >=mid; i--)
			{
				cout << "|     " << id[i];
				if (id[i] < 10)
				{
cout << "       |      ";
				}
				else if (id[i] >= 10 && id[i] < 100)
				{
					cout << "      |      ";
				}
				else if (id[i] >= 100 && id[i] < 1000)
				{
					cout << "     |      ";
				}
				cout << quantity[i];
				if (quantity[i] < 10)
				{
					cout << "     |      ";
				}
				else if (quantity[i] >= 10 && quantity[i] < 100)
				{
					cout << "    |      ";
				}
				else if (quantity[i] >= 100 && quantity[i] < 1000)
				{
					cout << "   |      ";
				}

				cout << price[i];
				if (price[i] < 10)
				{
					cout << "      |      ";
				}
				else if (price[i] >= 10 && price[i] < 100)
				{
					cout << "     |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 100 && price[i] < 1000)
				{
					cout << "    |      ";
				}
				else if (price[i] >= 1000 && price[i] < 10000)
				{
					cout << "   |      ";
				}
				cout << total[i];
				if (total[i] < 10)
				{
					cout << "       |      ";
				}
				else if (total[i] >= 10 && total[i] < 100)
				{
					cout << "      |      ";
				}
				else if (total[i] >= 100 && total[i] < 1000)
				{
					cout << "     |      ";
				}
				else if (total[i] >= 1000 && total[i] < 10000)
				{
					cout << "    |      ";
				}


				cout << category[i] << "      |" << endl;
				cout << "|_____________|____________|_____________|______________|_____________|" << endl;

			}
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;

		}
		else if (func == 'l' || func == 'L')
		{
			int x;
			cout << "Enter the id of the product to be updated = ";
			cin >> x;
			for (int i = 0; i < size_i; i++)
			{
				if (x == id[i])
				{
					cout << "Enter the new quantity of product = ";
					cin >> quantity[i];
					cout << "Enter the new price of product = ";
					cin >> price[i];
					total[i] = quantity[i] * price[i];
				}
			}
			cout << "Updated successfully." << endl;
			char c;
			cout << "Press M or any other letter to go back to main menu.";
			cin >> c;

		}

	}
	return 0;

}






//Kianat


/*{
	cout << "Enter the id to be updated : ";
	cin >> x;

	for (int i = 0; i < size_1; i++) {
		if (x == id[i]) {
			cout << "enter the quantity:";
			cin >> quantity[i];
			cout << "Enter the price: ";
			cin >> price[i];

		}

	}
}




//Ahmad Tajeel



for (int i = 0; i < size_i; i++) {
	for (int j = 0; i = size_i - i - 1; j++) {
		if (id[j] > id{ j + 1 }) {

			int temp = id[j];
			int[j] = int[j + 1];
			temp = id[j + 1];
		}
	}
}*/

