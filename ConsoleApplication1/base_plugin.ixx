module;

#include <neargye/semver.hpp>

export module sdk.base_plugin;

export namespace sdk
{
  template <typename TPlugin> class base_plugin
  {
  protected:
    auto emplace(const semver::version _game_version, const semver::version _plugin_version) noexcept ->void {}

    base_plugin(void) noexcept {}
    virtual ~base_plugin(void) noexcept {}
  };
};