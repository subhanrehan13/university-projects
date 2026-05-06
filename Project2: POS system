#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void search(int arr[], int &target, int size, bool &found)
{
	int high = size - 1, low = 0, mid;
	found = false;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if (target == arr[mid])
		{
			target = mid;
			found = true;
			break;
		}
		else if (target < arr[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
}

void input_int(int &input, char msg[])
{
	char in[20];

	for (;;)
	{
		cout << msg;
		cin.getline(in, 20);
		int size = strlen(in);
		input = 0;
		bool ok = true;

		for (int i = 0; i < size; i++)
		{
			if (in[i] >= '0' && in[i] <= '9')
			{
				input = (input * 10) + (in[i] - '0');
			}
			else
			{
				cout << "Invalid input! Enter an integer value.\n";
				ok = false;
				break;
			}
		}

		if (ok)
		{
			break;
		}
	}
}

int main()
{
	int psize = 1, pnsize = 0, purs = 1, pns = 0, cus = 1, cusn = 0, sns = 0, sales = 1;														  // spi = size product id, spq = size product quantity, spp = size product price, spn = size product name, spq = size product brand, spns = size product namesize
	int *pid = new int[psize], *pquan = new int[psize], *ppri = new int[psize], *pbrand = new int[psize], *pname_siz = new int[psize];			  // pid = product id, pquan = product quantity, ppri = product price, pbrand = product brand,
	char *pname = new char[pnsize];																												  // pname = product name,
	int *purid = new int[purs], *purquan = new int[purs], *purcost = new int[purs], *purbrand = new int[purs], *purname_siz = new int[purs];	  // pid = product id, pquan = product quantity, ppri = product price, pbrand = product brand,
	char *purname = new char[pns];																												  // purname = purchase name,
	int *cusid = new int[purs], *cusquan = new int[purs], *cuscost = new int[purs], *cusbrand = new int[purs], *cusname_siz = new int[purs];	  // pid = product id, pquan = product quantity, ppri = product price, pbrand = product brand,
	char *cusname = new char[pns];																												  // cusname = customer name,
	int *saleid = new int[purs], *salequan = new int[purs], *salecost = new int[purs], *salebrand = new int[purs], *salename_siz = new int[purs]; // pid = product id, pquan = product quantity, ppri = product price, pbrand = product brand,
	char *salen = new char[sns];

	int count1 = 0;
	int choice;

	ifstream readp("product.csv");
	char ch;
	int turn = 0, stor = 0;
	while (readp.get(ch))
	{
		int tsiz = psize - 1;
		if (ch == ',')
		{
			stor = 0;
			turn++;
		}
		else if (ch == '\n')
		{
			stor = 0;
			turn = 0;
			psize++;
		}
		else
		{
			if (turn == 0)
			{
				stor = (stor * 10) + (ch - '0');
				pid[tsiz] = stor;
			}
			else if (turn == 1)
			{
				pnsize++;
				int t = pnsize - 1;
				pname[t] = ch;
			}
			else if (turn == 2)
			{
				stor = (stor * 10) + (ch - '0');
				pbrand[tsiz] = stor;
			}
			else if (turn == 3)
			{
				stor = (stor * 10) + (ch - '0');
				ppri[tsiz] = stor;
			}
			else if (turn == 4)
			{
				stor = (stor * 10) + (ch - '0');
				pquan[tsiz] = stor;
			}
			else if (turn == 5)
			{
				stor = (stor * 10) + (ch - '0');
				pbrand[tsiz] = stor;
			}
			else if (turn == 6)
			{
				stor = (stor * 10) + (ch - '0');
				pname_siz[tsiz] = stor;
			}
		}
	}
	ifstream readpur("purchase.csv");
	char ch1;
	int turn1 = 0, stor1 = 0;
	while (readpur.get(ch1))
	{
		int tsiz = purs - 1;
		if (ch1 == ',')
		{
			stor1 = 0;
			turn1++;
		}
		else if (ch1 == '\n')
		{
			stor1 = 0;
			turn1 = 0;
			purs++;
		}
		else
		{
			if (turn1 == 0)
			{
				stor1 = (stor1 * 10) + (ch1 - '0');
				purid[tsiz] = stor1;
			}
			else if (turn1 == 1)
			{
				pns++;
				int t = pns - 1;
				purname[t] = ch1;
			}
			else if (turn1 == 2)
			{
				stor1 = (stor1 * 10) + (ch1 - '0');
				purbrand[tsiz] = stor1;
			}
			else if (turn1 == 3)
			{
				stor1 = (stor1 * 10) + (ch1 - '0');
				purcost[tsiz] = stor1;
			}
			else if (turn1 == 4)
			{
				stor1 = (stor1 * 10) + (ch1 - '0');
				purquan[tsiz] = stor1;
			}
			else if (turn == 5)
			{
				stor = (stor * 10) + (ch - '0');
				purbrand[tsiz] = stor;
			}
			else if (turn == 6)
			{
				stor = (stor * 10) + (ch - '0');
				purname_siz[tsiz] = stor;
			}
		}
	}

	ifstream readcus("customer.csv");
	char ch2;
	int turn2 = 0, stor2 = 0;
	while (readcus.get(ch2))
	{
		int tsiz = cus - 1;
		if (ch2 == ',')
		{
			stor2 = 0;
			turn2++;
		}
		else if (ch2 == '\n')
		{
			stor2 = 0;
			turn2 = 0;
			cus++;
		}
		else
		{
			if (turn2 == 0)
			{
				stor2 = (stor2 * 10) + (ch2 - '0');
				cusid[tsiz] = stor2;
			}
			else if (turn2 == 1)
			{
				pnsize++;
				int t = cusn - 1;
				cusname[t] = ch2;
			}
			else if (turn2 == 2)
			{
				stor2 = (stor2 * 10) + (ch2 - '0');
				cusbrand[tsiz] = stor2;
			}
			else if (turn2 == 3)
			{
				stor2 = (stor2 * 10) + (ch2 - '0');
				cuscost[tsiz] = stor2;
			}
			else if (turn2 == 4)
			{
				stor2 = (stor2 * 10) + (ch2 - '0');
				cusquan[tsiz] = stor2;
			}
			else if (turn == 5)
			{
				stor = (stor * 10) + (ch - '0');
				cusbrand[tsiz] = stor;
			}
			else if (turn == 6)
			{
				stor = (stor * 10) + (ch - '0');
				cusname_siz[tsiz] = stor;
			}
		}
	}

	ifstream reads("sale.csv");
	char ch3;
	int turn3 = 0, stor3 = 0;
	while (reads.get(ch3))
	{
		int tsiz = sales - 1;
		if (ch3 == ',')
		{
			stor3 = 0;
			turn3++;
		}
		else if (ch3 == '\n')
		{
			stor3 = 0;
			turn3 = 0;
			sales++;
		}
		else
		{
			if (turn3 == 0)
			{
				stor3 = (stor3 * 10) + (ch3 - '0');
				saleid[tsiz] = stor3;
			}
			else if (turn3 == 1)
			{
				sns++;
				int t = sns - 1;
				salen[t] = ch3;
			}
			else if (turn3 == 2)
			{
				stor3 = (stor3 * 10) + (ch3 - '0');
				salebrand[tsiz] = stor3;
			}
			else if (turn3 == 3)
			{
				stor3 = (stor3 * 10) + (ch3 - '0');
				salecost[tsiz] = stor3;
			}
			else if (turn3 == 4)
			{
				stor3 = (stor3 * 10) + (ch3 - '0');
				salequan[tsiz] = stor3;
			}
			else if (turn3 == 4)
			{
				stor3 = (stor3 * 10) + (ch3 - '0');
				salename_siz[tsiz] = stor3;
			}
			else if (turn == 5)
			{
				stor = (stor * 10) + (ch - '0');
				salebrand[tsiz] = stor;
			}
			else if (turn == 6)
			{
				stor = (stor * 10) + (ch - '0');
				salename_siz[tsiz] = stor;
			}
		}
	}

	int count = 0;
	for (;;)
	{
		char login[16] = "login@admin.com", pass[9] = "admin123";
		char ulogin[50], upass[50];
		cout << "Enter your email = ";
		cin.getline(ulogin, 50);
		cout << "Enter your password = ";
		cin.getline(upass, 50);
		bool loginmatch = true, passmatch = true;
		if (strcmp(login, ulogin) != 0)
		{
			loginmatch = false;
		}
		if (strcmp(pass, upass) != 0)
		{
			passmatch = false;
		}
		if (passmatch == true && loginmatch == true)
		{

			for (;;)
			{
				cout << "\n       MAIN MENU\n\n"
					<< "Product Menu           1\n"
					<< "Purchase Menu          2\n"
					<< "Customer Menu          3\n"
					<< "Sale Menu              4\n"
					<< "Exit                   0\n";
				cout << "Enter your choice = ";
				cin >> choice;

				if (choice == 0)
				{
					break;
				}

				else if (choice == 1)
				{
					int choice1;
					for (;;)
					{
						cout << "\nAdd product            1"
							<< "\nView all products      2"
							<< "\nSearch a product       3"
							<< "\nReturn to main menu    0";
						cout << "Enter your choice = ";
						cin >> choice1;
						if (choice1 == 1)
						{

							char tname[50];
							int count = 0, tsize = psize - 1;
							pid[tsize] = 100 + tsize;
							cout << "Enter product name = ";
							cin.ignore();
							cin.get(tname, 50);
							int tnsize = strlen(tname), j = 0;
							pname_siz[tsize] = tnsize;
							pnsize += tnsize;
							for (int i = pnsize - tnsize; i < pnsize; i++)
							{
								pname[i] = tname[j++];
							}

							cout << "Enter product price = ";
							cin >> ppri[tsize];
							cout << "Enter the product quantity = ";
							cin >> pquan[tsize];
							psize++;
							ofstream writep("product.csv", ios::app);
							if (!writep)
							{
								cout << "Error opening file!\n Restart program to help resolve the issue.";
								return 1;
							}
							writep << pid[tsize] << "," << tname << "," << "," << ppri[tsize] << "," << pquan[tsize] << ',' << pname_siz[tsize] << ',' << endl;
							writep.close();
						}
						else if (choice1 == 2)
						{
							cout << " Id        Name       Cost        Quantity\n";
							int k = 0, x = 0;
							for (int i = 0; i < psize - 1; i++)
							{
								cout << " " << pid[i] << "       ";

								for (int j = 0; j < pname_siz[i]; j++)
								{
									cout << pname[j + k];
								}
								k += pname_siz[i];
								cout << "          ";
								cout << ppri[i] << "          ";

								cout << pquan[i];

								cout << "\n";
							}
						}
						else if (choice1 == 3)
						{
							for (;;)
							{
								bool escape = false;
								int x;
								cout << "Select the way you want to search = \nBy ID      1\nBy Name     2\n ";
								char m3[50] = { "Enter your choice = " };
								input_int(x, m3);
								if (x == 1)
								{
									for (;;)
									{
										int target;
										bool found = false;
										cout << "Enter the id to search = ";
										cin >> target;
										search(pid, target, psize, found);

										if (found)
										{
											cout << "ID = " << pid[target] << "\nName = ";
											int limit = 0, limit1 = 0;
											for (int i = 0; i < target; i++)
											{
												limit += pname_siz[i];
												limit1 += pname_siz[i];
											}
											limit1 += pname_siz[target];
											for (int i = limit; i < limit1; i++)
											{
												cout << pname[i];
											}
											cout << "\nPrice = " << ppri[target] << "\nQuantity = " << pquan[target];
											escape = true;
											break;
										}
										else
										{
											cout << "Target not found!";
										}
									}
								}
								else if (x == 2)
								{

									for (;;)
									{
										cout << "Enter the name you want to search = ";
										char tn[20];
										cin.ignore();		 // Clear newline from previous input
										cin.getline(tn, 20); // Take input safely

										int inputLen = 0;
										while (tn[inputLen] != '\0')
										{
											inputLen++; // manually get length
										}
										int k = 0; // index into pname
										bool found = false;
										int index = -1;

										for (int i = 0; i < psize; i++)
										{
											bool match = true;

											// Compare lengths first
											if (inputLen != pname_siz[i])
											{
												match = false;
											}
											else
											{
												for (int j = 0; j < pname_siz[i]; j++)
												{
													if (tn[j] != pname[k + j])
													{
														match = false;
														break;
													}
												}
											}

											if (match)
											{
												found = true;
												index = i;
												break;
											}

											k += pname_siz[i]; // move to next name
										}

										if (found && index != -1)
										{
											cout << "ID = " << pid[index] << "\nName = ";

											// Print name manually
											int start = 0;
											for (int i = 0; i < index; i++)
												start += pname_siz[i];

											for (int i = 0; i < pname_siz[index]; i++)
												cout << pname[start + i];

											cout << "\nPrice = " << ppri[index];
											cout << "\nQuantity = " << pquan[index] << endl;

											escape = true;
											break;
										}
										else
										{
											cout << "Name not found!\n";
										}
									}
								}
								else
								{
									cout << "Invalid choice entered!";
								}
								if (escape)
								{
									break;
								}
							}
						}
						else if (choice1 == 0)
						{
							break;
						}
						else
						{
							cout << "Invalid choice Entered!";
						}
					}
				}

				else if (choice == 2)
				{
					int choice1;
					for (;;)
					{
						cout << "\nAdd purchase            1"
							<< "\nView all pruchases      2"
							<< "\nSearch a purchase       3"
							<< "\nReturn to main menu     4\n";
						cout << "Enter your choice = ";
						cin >> choice1;
						if (choice1 == 1)
						{
							int tsize = purs - 1;
							purid[tsize] = 1000 + tsize;
							// entering name
							char tname[50];
							cout << "Enter the name of product purchased = ";
							cin.ignore();
							cin.get(tname, 50);
							int tnsize = strlen(tname), j = 0;
							purname_siz[tsize] = tnsize;
							pns += tnsize;

							cin >> purbrand[tsize];
							cout << "Enter cost of purchase = ";
							cin >> purcost[tsize];
							cout << "Enter purchase quantity = ";
							cin >> purquan[tsize];
							purs++;

							ofstream writepur("purchase.csv", ios::app);
							if (!writepur)
							{
								cout << "Error opening file!\n Restart program to help resolve the issue.";
								return 1;
							}
							writepur << purid[tsize] << "," << tname << "," << purcost[tsize] << "," << purquan[tsize] << "," << purbrand[tsize] << ',' << purname_siz[tsize] << ',' << endl;
							writepur.close();
						}
						else if (choice1 == 2)
						{

							cout << " Id        Name       Cost        Quantity\n";
							int k = 0;
							for (int i = 0; i < purs - 1; i++)
							{
								cout << " " << purid[i] << "        ";
								for (int j = 0; j < purname_siz[i]; j++)
								{
									cout << purname[j + k];
								}
								k += purname_siz[i];

								cout << "         " << purcost[i] << "       " << purquan[i] << "\n";
							}
						}
						else if (choice1 == 3)
						{
							for (;;)
							{
								bool escape = false;
								int x;
								cout << "Select the way you want to search = \nBy ID      1\nBy Name     2\n ";
								char m3[50] = { "Enter your choice = " };
								input_int(x, m3);
								if (x == 1)
								{

									for (;;)
									{

										int target;
										bool found = false;
										cout << "Enter the id to search = ";
										cin >> target;
										search(purid, target, purs, found);

										if (found)
										{
											cout << "ID = " << purid[target] << "\nName = ";
											int limit = 0, limit1 = 0;
											for (int i = 0; i < target; i++)
											{
												limit += purname_siz[i];
												limit1 += purname_siz[i];
											}
											limit1 += purname_siz[target];
											for (int i = limit; i < limit1; i++)
											{
												cout << purname[i];
											}
											cout << "\nPrice = " << purcost[target] << "\nQuantity = " << purquan[target];
											escape = true;
											break;
										}
										else
										{
											cout << "Target not found!";
										}
									}
								}
								else if (x == 2)
								{
									for (;;)
									{
										cout << "Enter the name you want to search = ";
										char tn[20];
										cin.ignore();		 // Clear newline from previous input
										cin.getline(tn, 20); // Take input safely

										int inputLen = 0;
										while (tn[inputLen] != '\0')
										{
											inputLen++; // manually get length
										}
										int k = 0; // index into pname
										bool found = false;
										int index = -1;

										for (int i = 0; i < purs; i++)
										{
											bool match = true;

											// Compare lengths first
											if (inputLen != purname_siz[i])
											{
												match = false;
											}
											else
											{
												for (int j = 0; j < purname_siz[i]; j++)
												{
													if (tn[j] != purname[k + j])
													{
														match = false;
														break;
													}
												}
											}

											if (match)
											{
												found = true;
												index = i;
												break;
											}

											k += purname_siz[i]; // move to next name
										}

										if (found && index != -1)
										{
											cout << "ID = " << purid[index] << "\nName = ";

											// Print name manually
											int start = 0;
											for (int i = 0; i < index; i++)
												start += purname_siz[i];

											for (int i = 0; i < purname_siz[index]; i++)
												cout << purname[start + i];

											cout << "\nPrice = " << purcost[index];
											cout << "\nQuantity = " << purquan[index] << endl;

											escape = true;
											break;
										}
										else
										{
											cout << "Name not found!\n";
										}
									}
								}
								else
								{
									cout << "Invalid choice entered!";
								}
								if (escape)
								{
									break;
								}
							}
						}
						else if (choice1 == 0)
						{
							break;
						}
						else
						{
							cout << "Invalid choice entered!";
						}
					}
				}
				else if (choice == 3)
				{
					int choice1;
					for (;;)
					{
						cout << "\nAdd a customer          1"
							<< "\nView all customer       2"
							<< "\nSearch a customer       3"
							<< "\nReturn to main menu     0\n\n";
						cout << "Enter your choice = ";
						cin >> choice1;
						if (choice1 == 1)
						{
							int tsize = cus - 1;
							cusid[tsize] = 1000 + tsize;
							// entering name
							char tname[50];
							cout << "Enter coustomer's name = ";
							cin.ignore();
							cin.get(tname, 50);
							int tnsize = strlen(tname), j = 0;
							cusname_siz[tsize] = tnsize;
							cusn += tnsize;
							for (int i = cusn - tnsize; i < cusn; i++)
							{
								cusname[i] = tname[j++];
							}

							cout << "Enter amount of sale = ";
							cin >> cuscost[tsize];
							cout << "Enter the quantity of sale = ";
							cin >> cusquan[tsize];
							cus++;

							ofstream writec("customer.csv", ios::app);
							if (!writec)
							{
								cout << "Error opening file!\n Restart program to help resolve the issue.";
								return 1;
							}
							writec << cusid[tsize] << "," << tname << "," << cuscost[tsize] << "," << cusquan[tsize] << "," << cusbrand[tsize] << ',' << cusname_siz[tsize] << ',' << endl;
							writec.close();
						}
						else if (choice1 == 2)
						{
							cout << " Id        Name       Cost        Quantity\n";
							int k = 0;
							for (int i = 0; i < cus - 1; i++)
							{
								cout << " " << cusid[i] << "        ";
								for (int j = 0; j < cusname_siz[i]; j++)
								{
									cout << cusname[j + k];
								}
								k += cusname_siz[i];

								cout << "            " << cuscost[i] << "           " << cusquan[i] << "\n";
							}
						}
						else if (choice1 == 3)
						{

							for (;;)
							{
								bool escape = false;
								int x;
								cout << "Select the way you want to search = \nBy ID      1\nBy Name     2\n ";
								char m3[50] = { "Enter your choice = " };
								input_int(x, m3);
								if (x == 1)
								{
									for (;;)
									{
										int target;
										bool found = false;
										cout << "Enter the id to search = ";
										cin >> target;
										search(cusid, target, cus, found);

										if (found)
										{
											cout << "ID = " << cusid[target] << "\nName = ";
											int limit = 0, limit1 = 0;
											for (int i = 0; i < target; i++)
											{
												limit += cusname_siz[i];
												limit1 += cusname_siz[i];
											}
											limit1 += cusname_siz[target];
											for (int i = limit; i < limit1; i++)
											{
												cout << cusname[i];
											}
											cout << "\nPrice = " << cuscost[target] << "\nQuantity = " << cusquan[target];
											break;
										}
										else
										{
											cout << "Target not found!";
										}
									}
								}
								else if (x == 2)
								{
									for (;;)
									{
										cout << "Enter the name you want to search = ";
										char tn[20];
										cin.ignore();		 // Clear newline from previous input
										cin.getline(tn, 20); // Take input safely

										int inputLen = 0;
										while (tn[inputLen] != '\0')
										{
											inputLen++; // manually get length
										}
										int k = 0; // index into pname
										bool found = false;
										int index = -1;

										for (int i = 0; i < cus; i++)
										{
											bool match = true;

											// Compare lengths first
											if (inputLen != cusname_siz[i])
											{
												match = false;
											}
											else
											{
												for (int j = 0; j < cusname_siz[i]; j++)
												{
													if (tn[j] != cusname[k + j])
													{
														match = false;
														break;
													}
												}
											}

											if (match)
											{
												found = true;
												index = i;
												break;
											}

											k += cusname_siz[i]; // move to next name
										}

										if (found && index != -1)
										{
											cout << "ID = " << cusid[index] << "\nName = ";

											// Print name manually
											int start = 0;
											for (int i = 0; i < index; i++)
												start += cusname_siz[i];

											for (int i = 0; i < cusname_siz[index]; i++)
												cout << cusname[start + i];

											cout << "\nPrice = " << cuscost[index];
											cout << "\nQuantity = " << cusquan[index] << endl;

											escape = true;
											break;
										}
										else
										{
											cout << "Name not found!\n";
										}
									}
								}
								else
								{
									cout << "Invalid choice entered!";
								}
							}
						}
						else if (choice1 == 0)
						{
							break;
						}
						else
						{
							cout << "Invalid choice entered!";
						}
					}
				}
				else if (choice == 4)
				{
					int choice1;
					for (;;)
					{
						cout << "\nAdd a sale             1"
							<< "\nView all sales         2"
							<< "\nSearch a sale          3"
							<< "\nReturn to main menu    0\n\n";
						cout << "Enter your choice = ";
						cin >> choice1;
						if (choice1 == 1)
						{
							char tname[50];
							int tsize = sales - 1;
							saleid[tsize] = 100 + tsize;
							cout << "Enter product name = ";
							cin.ignore();
							cin.get(tname, 50);
							int tnsize = strlen(tname), j = 0;
							salename_siz[tsize] = tnsize;
							sns += tnsize;
							for (int i = sns - tnsize; i < sns; i++)
							{
								salen[i] = tname[j++];
							}

							cout << "Enter sale amount = ";
							cin >> salecost[tsize];
							cout << "Enter sold product quantity = ";
							cin >> salequan[tsize];
							sales++;
							ofstream writes("sales.csv", ios::app);
							if (!writes)
							{
								cout << "Error opening file!\n Restart program to help resolve the issue.";
								return 1;
							}
							writes << saleid[tsize] << "," << tname << "," << salecost[tsize] << "," << salequan[tsize] << "," << salebrand[tsize] << ',' << salename_siz[tsize] << ',' << endl;
							writes.close();
						}
						else if (choice1 == 2)
						{

							cout << " Id        Name        Amount        Quantity\n";
							int k = 0;
							for (int i = 0; i < sales - 1; i++)
							{
								cout << " s" << saleid[i] << "        ";
								for (int j = 0; j < salename_siz[i]; j++)
								{
									cout << salen[j + k];
								}
								k += salename_siz[i];

								cout << "            " << salecost[i] << "           " << salequan[i] << "\n";
							}
						}
						else if (choice1 == 3)
						{

							for (;;)
							{
								bool escape = false;
								int x;
								cout << "Select the way you want to search = \nBy ID      1\nBy Name     2\n\n";
								char m3[50] = { "Enter your choice = " };
								input_int(x, m3);
								if (x == 1)
								{
									for (;;)
									{
										int target;
										bool found = false;
										cout << "Enter the id to search = ";
										cin >> target;
										search(purid, target, psize, found);

										if (found)
										{
											cout << "ID = " << purid[target] << "\nName = ";
											int limit = 0, limit1 = 0;
											for (int i = 0; i < target; i++)
											{
												limit += purname_siz[i];
												limit1 += purname_siz[i];
											}
											limit1 += purname_siz[target];
											for (int i = limit; i < limit1; i++)
											{
												cout << purname[i];
											}
											cout << "\nPrice = " << purcost[target] << "\nQuantity = " << purquan[target];
											break;
										}
										else
										{
											cout << "Target not found!";
										}
									}
								}
								else if (x == 2)
								{
									for (;;)
									{
										cout << "Enter the name you want to search = ";
										char tn[20];
										cin.ignore();		 // Clear newline from previous input
										cin.getline(tn, 20); // Take input safely

										int inputLen = 0;
										while (tn[inputLen] != '\0')
										{
											inputLen++; // manually get length
										}
										int k = 0; // index into pname
										bool found = false;
										int index = -1;

										for (int i = 0; i < sales; i++)
										{
											bool match = true;

											// Compare lengths first
											if (inputLen != salename_siz[i])
											{
												match = false;
											}
											else
											{
												for (int j = 0; j < salename_siz[i]; j++)
												{
													if (tn[j] != salen[k + j])
													{
														match = false;
														break;
													}
												}
											}

											if (match)
											{
												found = true;
												index = i;
												break;
											}

											k += salename_siz[i]; // move to next name
										}

										if (found && index != -1)
										{
											cout << "ID = " << saleid[index] << "\nName = ";

											// Print name manually
											int start = 0;
											for (int i = 0; i < index; i++)
												start += salename_siz[i];

											for (int i = 0; i < salename_siz[index]; i++)
												cout << salen[start + i];

											cout << "\nAmount = " << salecost[index];
											cout << "\nQuantity = " << salequan[index] << endl;

											escape = true;
											break;
										}
										else
										{
											cout << "Name not found!\n";
										}
									}
								}
								else
								{
									cout << "Invalid choice entered!";
								}
							}
						}
						else if (choice1 == 0)
						{
							break;
						}
						else
						{
							cout << "Invalid choice entered!";
						}
					}
				}
			}

			// delete[] pid;
			// delete[] purid;
			// delete[] cusid;
			// delete[] pbrand;
			// delete[] purbrand;

			// delete[] ppri;
			// delete[] purcost;
			// delete[] cuscost;
			// delete[] cusquan;
			// delete[] purquan;
			// delete[] pquan;
			// delete[] pname_siz;
			// delete[] purname_siz;
			// delete[] cusname_siz;
			// delete[] cusname;
			// delete[] purname;
			// delete[] pname;
			break;
		}
		else
		{
			cout << "Incorrect Login or Password Entered!\n";
			count1++;
		}
		if (count1 > 2)
		{
			cout << "Too many incorrect passwords entered , SYSTEM LOCKED.\n";
			break;
		}
	}
	return 0;
}
