#include <unordered_map>
std::string get_planet_name(int id)
{
  std::unordered_map <int, std::string> planets {
    {1, "Mercury"},
    {2, "Venus"},
    {3, "Earth"},
    {4, "Mars"},
    {5, "Jupiter"},
    {6, "Saturn"},
    {7, "Uranus"},
    {8, "Neptune"}
  };
  return planets[id];
}
