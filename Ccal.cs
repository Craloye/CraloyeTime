using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter radius of the sphere: ");

        double a = Convert.ToDouble(Console.ReadLine());

        double C = Calculate(a);

        Console.WriteLine($"The volume of the sphere with the radius is {C}");
    }

    static double Calculate(double a)
    {
        double C = (4.0 / 3.0) * Math.PI * Math.Pow(a, 3);
        return C;
    }
}
