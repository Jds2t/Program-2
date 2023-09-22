//julian flores
//sep. 20, 2023
//comsci 1 (Mika morgan)
#include <iostream>
#include <cmath>

// Define a constant for PI
const double PI = 3.14;

int main() {
    // Declare variables for cone
    double cone_radius, cone_height;
    
    // Declare variables for cylinder
    double cylinder_radius, cylinder_height;
    
    // Declare variable for sphere
    double sphere_radius;
    
    // Prompt the user for cone's radius and height
    std::cout << "Enter the radius of the cone: ";
    std::cin >> cone_radius;
    std::cout << "Enter the height of the cone: ";
    std::cin >> cone_height;
    
    // Prompt the user for cylinder's radius and height
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> cylinder_radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> cylinder_height;
    
    // Prompt the user for sphere's radius
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> sphere_radius;
    
    // Calculate volumes
    double cone_volume = (1.0/3.0) * PI * std::pow(cone_radius, 2) * cone_height;
    double cylinder_volume = PI * std::pow(cylinder_radius, 2) * cylinder_height;
    double sphere_volume = (4.0/3.0) * PI * std::pow(sphere_radius, 3);
    
    // Calculate total volume
    double total_volume = cone_volume + cylinder_volume + sphere_volume;
    
    // Output the results with a heading
    std::cout << "The volume of a cone with radius " << cone_radius << " and height " << cone_height << " is " << cone_volume << ".\n";
    std::cout << "The volume of a cylinder with radius " << cylinder_radius << " and height " << cylinder_height << " is " << cylinder_volume << ".\n";
    std::cout << "The volume of a sphere with radius " << sphere_radius << " is " << sphere_volume << ".\n";
    std::cout << "The total volume of the above objects is " << total_volume << ".\n";
    
    return 0;
}
