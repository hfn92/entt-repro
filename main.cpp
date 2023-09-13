
#include "Components.h"
#include "Prototypes.h"
#include <iostream>

void Create(entt::registry& reg);

int main()
{
  entt::registry reg;
  Create(reg);
  reg.emplace<std::vector<entt::entity>>(reg.create());
  for (auto [n, s] : reg.storage())
  {
    std::cout << n << " : " << s.type().name() << std::endl;
  }

  for (auto [n, s] : reg.storage())
  {
    if (n != s.type().hash())
    {
      std::cerr << "Error detected!!!"
                << " " << n << " vs " << s.type().hash() << std::endl;
      return -1;
    }
  }

  return 0;
}
