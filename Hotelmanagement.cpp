// HOTELS MANAGEMENT PROJECT...
#include <iostream>
using namespace std;
int main()
{
   int quant;
   int choice;
   // Quantity
   int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
   // food iteams sold
   int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
   // Total price of iteams
   int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
   cout << "\n\t Quantity of iteams we have";
   cout << "\n Rooms available:";
   cin >> Qrooms;
   cout << "\n Quantity of pasta:";
   cin >> Qpasta;
   cout << "\n Quantity of burger:";
   cin >> Qburger;
   cout << "\n Quantity of noodles:";
   cin >> Qnoodles;
   cout << "\n Quantity of shake:";
   cin >> Qshake;
   cout << "\n Quantity of chicken:";
   cin >> Qchicken;
m:
   cout << "\n\t\t\t Please select from the menu options ";
   cout << "\n\n1) Rooms";
   cout << "\n2) Pasta";
   cout << "\n3) Burger";
   cout << "\n4) noodles";
   cout << "\n5) shake";
   cout << "\n6) chicken";
   cout << "\n7) Information regarding sales and collection";
   cout << "\n8) Exit";
   cout << "\n\n Please Enter your choice: ";
   cin >> choice;
   switch (choice)
   {
   case 1:
      cout << "\n\n Please Enter the number of rooms you want: ";
      cin >> quant;
      if (Qrooms - Srooms >= quant)
      {
         Srooms = Srooms + quant;
         Total_rooms = Total_rooms + quant * 1200;
         cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
      }
      else
         cout << "\n\tHii Only " << Qrooms - Srooms << " Rooms remaining in hotel";
      break;

   case 2:
      cout << "\n\n Please Enter Pasta Quantity :";
      cin >> quant;
      if (Qpasta - Spasta >= quant)
      {
         Spasta = Spasta + quant;
         Total_rooms = Total_pasta + quant * 250;
         cout << "\n\n\t\t" << quant << "pasta is the order!";
      }
      else
         cout << "\n\tOnly" << Qpasta - Spasta << "Pasta remaining in hotel";
      break;
   case 3:
      cout << "\n\n Please Enter Burger Quantity :";
      cin >> quant;
      if (Qburger - Sburger >= quant)
      {
         Sburger = Sburger + quant;
         Total_rooms = Total_burger + quant * 250;
         cout << "\n\n\t\t" << quant << "burger is the order!";
      }
      else
         cout << "\n\tOnly" << Qburger - Sburger << "Burger remaining in hotel";
      break;

   case 4:

      cout << "\n\n Please Enter Noodels Quantity :";
      cin >> quant;
      if (Qnoodles - Snoodles >= quant)
      {
         Snoodles = Snoodles + quant;
         Total_rooms = Total_noodles + quant * 250;
         cout << "\n\n\t\t" << quant << "Noodles is the order!";
      }
      else
         cout << "\n\tOnly" << Qnoodles - Snoodles << "Noodles remaining in hotel";
      break;

   case 5:

      cout << "\n\n Please Enter Shake Quantity :";
      cin >> quant;
      if (Qshake - Sshake >= quant)
      {
         Sshake = Sshake + quant;
         Total_rooms = Total_shake + quant * 250;
         cout << "\n\n\t\t" << quant << "Shake is the order!";
      }
      else
         cout << "\n\tOnly" << Qnoodles - Snoodles << "Shake remaining in hotel";
      break;

   case 6:

      cout << "\n\n Please Enter Shake Quantity :";
      cin >> quant;
      if (Qchicken - Schicken >= quant)
      {
         Schicken = Schicken + quant;
         Total_rooms = Total_chicken + quant * 250;
         cout << "\n\n\t\t" << quant << "Chicken is the order!";
      }
      else
         cout << "\n\tOnly" << Qchicken - Schicken << "Chicken remaining in hotel";
      break;
   case 7:
      cout << "\n\t\tDetails of sales and collection";
      cout << "\n\nNumber of rooms we had: " << Qrooms;
      cout << "\n\nNumber of rooms we gave for rent " << Srooms;
      cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
      cout << "\n\n Total rooms collection for the day :" << Total_rooms;

      cout << "\n\nNumber of Pastas we had: " << Qpasta;
      cout << "\n\nNumber of Pastas we gave we sold " << Spasta;
      cout << "\n\n Remaining Pastas: " << Qpasta - Spasta;
      cout << "\n\n Total Pasta collection for the day :" << Total_pasta;

      cout << "\n\nNumber of Burger we had: " << Qburger;
      cout << "\n\nNumber of Burger we gave we sold " << Sburger;
      cout << "\n\n Remaining Burger: " << Qburger - Sburger;
      cout << "\n\n Total Burger collection for the day :" << Total_burger;

      cout << "\n\nNumber of Burger we had: " << Qburger;
      cout << "\n\nNumber of Burger we gave we sold " << Sburger;
      cout << "\n\n Remaining Burger: " << Qburger - Sburger;
      cout << "\n\n Total Burger collection for the day :" << Total_burger;

      cout << "\n\nNumber of Noodles we had: " << Qnoodles;
      cout << "\n\nNumber of Noodles we gave we sold " << Snoodles;
      cout << "\n\n Remaining Noodles: " << Qnoodles - Snoodles;
      cout << "\n\n Total Noodles collection for the day :" << Total_noodles;

      cout << "\n\nNumber of Shake we had: " << Qshake;
      cout << "\n\nNumber of Shake we gave we sold " << Sshake;
      cout << "\n\n Remaining Shake: " << Qshake - Sshake;
      cout << "\n\n Total Shake collection for the day :" << Total_shake;

      cout << "\n\nNumber of Chicken we had: " << Qchicken;
      cout << "\n\nNumber of Chicken we gave we sold " << Schicken;
      cout << "\n\n Remaining Chicken: " << Qchicken - Schicken;
      cout << "\n\n Total Chicken collection for the day :" << Total_chicken;
      cout<<"\n\n Total Collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
      break;
   case 8:
      exit(0);
   default:
      cout << "\nPlease select the numbers mentioned above!";
   }
   goto m;

   return 0;
}
