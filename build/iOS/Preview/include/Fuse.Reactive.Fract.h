// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Fract;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Fract :351
// {
::g::Fuse::Reactive::UnaryOperator_type* Fract_typeof();
void Fract__ctor_5_fn(Fract* __this, ::g::Fuse::Reactive::Expression* operand);
void Fract__New1_fn(::g::Fuse::Reactive::Expression* operand, Fract** __retval);

struct Fract : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Fract* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
