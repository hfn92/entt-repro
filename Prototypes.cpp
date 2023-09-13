#include "Prototypes.h"
#include <entt/entity/handle.hpp>
#include <entt/entity/registry.hpp>

void Create(entt::registry& reg)
{
  entt::handle h{ reg, reg.create() };
  h.emplace<std::vector<entt::entity>>();
}
