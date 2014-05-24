#include <stdexcept>

#include <Hypodermic/ISharingLifetimeScope.h>
#include <Hypodermic/RootScopeLifetime.h>


namespace Hypodermic
{

    std::shared_ptr< ISharingLifetimeScope > RootScopeLifetime::findScope(std::shared_ptr< ISharingLifetimeScope > mostNestedVisibleScope)
    {
        if (mostNestedVisibleScope == nullptr)
            throw std::invalid_argument("mostNestedVisibleScope");
        return mostNestedVisibleScope->rootLifetimeScope();
    }

} // namespace Hypodermic
