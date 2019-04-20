// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/addPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.accountBook_FuseTriggersActionsSetstring_Value_Property.h>
#include <_root.addPage.h>
#include <_root.addPage.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataFunction.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[5];

namespace g{

// public partial sealed class addPage.Template :6
// {
// static Template() :19
static void addPage__Template__cctor__fn(uType* __type)
{
    addPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    addPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Monthtext"*/]);
}

static void addPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Monthtext");
    ::STRINGS[2] = uString::Const("select");
    ::STRINGS[3] = uString::Const("choice");
    ::STRINGS[4] = uString::Const("Pages/account/addPage.ux");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::addPage_typeof(), offsetof(addPage__Template, __parent1), uFieldFlagsWeak,
        ::g::addPage_typeof(), offsetof(addPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage__Template, selectvalue_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage__Template, __self_Value_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage__Template, temp_eb10), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)addPage__Template__New2_fn, 0, true, type, 2, ::g::addPage_typeof(), ::g::addPage_typeof()));
}

::g::Uno::UX::Template_type* addPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(addPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("addPage.Template", options);
    type->fp_build_ = addPage__Template_build;
    type->fp_cctor_ = addPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))addPage__Template__New1_fn;
    return type;
}

// public Template(addPage parent, addPage parentInstance) :10
void addPage__Template__ctor_1_fn(addPage__Template* __this, ::g::addPage* parent, ::g::addPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :22
void addPage__Template__New1_fn(addPage__Template* __this, uObject** __retval)
{
    uStackFrame __("addPage.Template", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->selectvalue_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(uPtr(__this->__parent1)->selectvalue, addPage__Template::__selector0_);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], __this->selectvalue_Value_inst);
    __this->temp_Value_inst = ::g::accountBook_FuseTriggersActionsSetstring_Value_Property::New1(temp, addPage__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"select"*/]);
    __this->__self_Value_inst1 = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(__self1, addPage__Template::__selector0_);
    ::g::Fuse::Reactive::DataFunction* temp2 = ::g::Fuse::Reactive::DataFunction::New1();
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"choice"*/]);
    ::g::Fuse::Gestures::Clicked* temp4 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp2, 3);
    __this->temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    __self1->FontSize(12.0f);
    __self1->TextAlignment(1);
    __self1->Color(::g::Uno::Float4__New2(0.3176471f, 0.3215686f, 0.3176471f, 1.0f));
    __self1->Alignment(0);
    __self1->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    __self1->Name(addPage__Template::__selector1_);
    __self1->SourceLineNumber(15);
    __self1->SourceFileName(::STRINGS[4/*"Pages/accou...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb10)));
    temp4->SourceLineNumber(16);
    temp4->SourceFileName(::STRINGS[4/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[4/*"Pages/accou...*/]);
    temp1->SourceLineNumber(17);
    temp1->SourceFileName(::STRINGS[4/*"Pages/accou...*/]);
    temp2->SourceLineNumber(15);
    temp2->SourceFileName(::STRINGS[4/*"Pages/accou...*/]);
    temp3->SourceLineNumber(15);
    temp3->SourceFileName(::STRINGS[4/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb10);
    return *__retval = __self1, void();
}

// public Template New(addPage parent, addPage parentInstance) :10
void addPage__Template__New2_fn(::g::addPage* parent, ::g::addPage* parentInstance, addPage__Template** __retval)
{
    *__retval = addPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector addPage__Template::__selector0_;
::g::Uno::UX::Selector addPage__Template::__selector1_;

// public Template(addPage parent, addPage parentInstance) [instance] :10
void addPage__Template::ctor_1(::g::addPage* parent, ::g::addPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(addPage parent, addPage parentInstance) [static] :10
addPage__Template* addPage__Template::New2(::g::addPage* parent, ::g::addPage* parentInstance)
{
    addPage__Template* obj1 = (addPage__Template*)uNew(addPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
