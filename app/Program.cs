// See https://aka.ms/new-console-template for more information
using System;
class init
{
    static void Main()
    {
        // Console.ForegroundColor = ConsoleColor.Blue;
        string name = "moawed mohamed";
        // Console.BackgroundColor = ConsoleColor.Green;
        Console.WriteLine("hello" + " " + name + " ");
        Console.WriteLine("fksdhfksd");
        Console.ResetColor();
        bool r1 = true, r2 = true;
        Console.WriteLine(r1 ^ r2); //Xor 
        int age = 20;
        // for (int i = 0; i < 20; i++)
        // {
        //     Console.WriteLine(i);
        // }
        while (true)
        {
            Console.WriteLine("enter the number ");
            string input = Console.ReadLine();
            if (int.TryParse(input, out int number))
            {
                if (number == 0)
                {
                    break;
                }
                else if (number < 0)
                {
                    Console.WriteLine("negative number");
                }
                else if (number % 2 == 0)
                {
                    Console.WriteLine("positive  number");
                }
            }

        }
        Console.WriteLine(Sum());
    }
    static int Sum()
    {
        int sum = 0;
        for (int i = 0; i < 20; i++)
        {
            sum += i;
        }
        return sum;
    }
    // Console.BackgroundColor=ConsoleColor.Black

}
