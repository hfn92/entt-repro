#pragma once

#include <entt/entity/handle.hpp>
#include <entt/entity/registry.hpp>
#include <functional>
#include <map>
#include <unordered_map>

class Prototypes
{
public:
  static void Create(entt::registry& reg, std::string_view i)
  {
    entt::handle h{ reg, reg.create() };
  }
};
