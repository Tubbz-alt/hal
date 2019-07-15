#ifndef GRAPHICS_FACTORY_H
#define GRAPHICS_FACTORY_H

#include "gui/graph_widget/graphics_items/graphics_gate.h"
#include "gui/graph_widget/graphics_items/graphics_module.h"

#include <QStringList>

#include <memory>

//class gate;
//class module;

//class graphics_gate;
//class graphics_module;

namespace graphics_factory
{
QStringList graphics_module_types();
QStringList graphics_gate_types();
graphics_module* create_graphics_module(std::shared_ptr<module> m, const int type);
graphics_gate* create_graphics_gate(std::shared_ptr<gate> g, const int type);
}

#endif // GRAPHICS_FACTORY_H