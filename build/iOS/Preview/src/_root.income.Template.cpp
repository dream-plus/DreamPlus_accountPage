// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/income.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.income.h>
#include <_root.income.Template.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class income.Template :6
// {
// static Template() :15
static void income__Template__cctor__fn(uType* __type)
{
}

static void income__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Pages/account/income.ux");
    type->SetFields(2,
        ::g::income_typeof(), offsetof(income__Template, __parent1), uFieldFlagsWeak,
        ::g::income_typeof(), offsetof(income__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)income__Template__New2_fn, 0, true, type, 2, ::g::income_typeof(), ::g::income_typeof()));
}

::g::Uno::UX::Template_type* income__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(income__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("income.Template", options);
    type->fp_build_ = income__Template_build;
    type->fp_cctor_ = income__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))income__Template__New1_fn;
    return type;
}

// public Template(income parent, income parentInstance) :10
void income__Template__ctor_1_fn(income__Template* __this, ::g::income* parent, ::g::income* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void income__Template__New1_fn(income__Template* __this, uObject** __retval)
{
    uStackFrame __("income.Template", "New()");
    ::g::Fuse::Controls::Circle* __self1 = ::g::Fuse::Controls::Circle::New3();
    __self1->Color(::g::Uno::Float4__New2(0.0f, 0.4235294f, 0.6666667f, 1.0f));
    __self1->Width(::g::Uno::UX::Size__New1(15.0f, 1));
    __self1->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    __self1->Alignment(0);
    __self1->Y(::g::Uno::UX::Size__New1(25.0f, 1));
    __self1->SourceLineNumber(14);
    __self1->SourceFileName(::STRINGS[0/*"Pages/accou...*/]);
    return *__retval = __self1, void();
}

// public Template New(income parent, income parentInstance) :10
void income__Template__New2_fn(::g::income* parent, ::g::income* parentInstance, income__Template** __retval)
{
    *__retval = income__Template::New2(parent, parentInstance);
}

// public Template(income parent, income parentInstance) [instance] :10
void income__Template::ctor_1(::g::income* parent, ::g::income* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(income parent, income parentInstance) [static] :10
income__Template* income__Template::New2(::g::income* parent, ::g::income* parentInstance)
{
    income__Template* obj1 = (income__Template*)uNew(income__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
