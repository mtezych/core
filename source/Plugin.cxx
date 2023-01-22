
#include <plugin/Plugin.h>

#include <cstdio>

#include <tool/Tool.h>


namespace plugin
{
	auto Plugin () -> void
	{
		std::puts("Plugin");

		tool::Tool();

		return;
	}
}
