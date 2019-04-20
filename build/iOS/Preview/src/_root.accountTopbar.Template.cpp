// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountTopbar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.accountBook_FuseTriggersActionsSetstring_Value_Property.h>
#include <_root.accountTopbar.h>
#include <_root.accountTopbar.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
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
static uString* STRINGS[6];
static uType* TYPES[5];

namespace g{

// public partial sealed class accountTopbar.Template :5
// {
// static Template() :18
static void accountTopbar__Template__cctor__fn(uType* __type)
{
    accountTopbar__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    accountTopbar__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Monthtext"*/]);
}

static void accountTopbar__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Monthtext");
    ::STRINGS[2] = uString::Const("Monthselect");
    ::STRINGS[3] = uString::Const("\354\233\224 \354\202\254\354\232\251\353\202\264\354\227\255");
    ::STRINGS[4] = uString::Const("Monthclick");
    ::STRINGS[5] = uString::Const("Pages/account/accountTopbar.ux");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::accountTopbar_typeof(), offsetof(accountTopbar__Template, __parent1), uFieldFlagsWeak,
        ::g::accountTopbar_typeof(), offsetof(accountTopbar__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountTopbar__Template, Monthvalue_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountTopbar__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountTopbar__Template, __self_Value_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(accountTopbar__Template, temp_eb5), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountTopbar__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountTopbar__Template::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)accountTopbar__Template__New2_fn, 0, true, type, 2, ::g::accountTopbar_typeof(), ::g::accountTopbar_typeof()));
}

::g::Uno::UX::Template_type* accountTopbar__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(accountTopbar__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("accountTopbar.Template", options);
    type->fp_build_ = accountTopbar__Template_build;
    type->fp_cctor_ = accountTopbar__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))accountTopbar__Template__New1_fn;
    return type;
}

// public Template(accountTopbar parent, accountTopbar parentInstance) :9
void accountTopbar__Template__ctor_1_fn(accountTopbar__Template* __this, ::g::accountTopbar* parent, ::g::accountTopbar* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :21
void accountTopbar__Template__New1_fn(accountTopbar__Template* __this, uObject** __retval)
{
    uStackFrame __("accountTopbar.Template", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->Monthvalue_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(uPtr(__this->__parent1)->Monthvalue, accountTopbar__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"Monthselect"*/]);
    uString* temp2 = ::STRINGS[3/*"월 사용내역"*/];
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(temp2);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], __this->Monthvalue_Value_inst);
    __this->temp_Value_inst = ::g::accountBook_FuseTriggersActionsSetstring_Value_Property::New1(temp, accountTopbar__Template::__selector0_);
    ::g::Fuse::Reactive::Add* temp4 = ::g::Fuse::Reactive::Add::New1(temp1, temp3);
    ::g::Fuse::Reactive::DataFunction* temp5 = ::g::Fuse::Reactive::DataFunction::New1();
    uString* temp6 = ::STRINGS[3/*"월 사용내역"*/];
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(temp6);
    __this->__self_Value_inst1 = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(__self1, accountTopbar__Template::__selector0_);
    ::g::Fuse::Reactive::Add* temp8 = ::g::Fuse::Reactive::Add::New1(temp5, temp7);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"Monthclick"*/]);
    ::g::Fuse::Gestures::Clicked* temp10 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp8, 3);
    __this->temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    __self1->FontSize(12.0f);
    __self1->TextAlignment(1);
    __self1->Color(::g::Uno::Float4__New2(0.3176471f, 0.3215686f, 0.3176471f, 1.0f));
    __self1->Alignment(0);
    __self1->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    __self1->Name(accountTopbar__Template::__selector1_);
    __self1->SourceLineNumber(9);
    __self1->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb5)));
    temp10->SourceLineNumber(10);
    temp10->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp->SourceLineNumber(11);
    temp->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp4->SourceLineNumber(11);
    temp4->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp1->SourceLineNumber(11);
    temp1->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp3->SourceLineNumber(11);
    temp3->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp8->SourceLineNumber(9);
    temp8->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp5->SourceLineNumber(9);
    temp5->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp7->SourceLineNumber(9);
    temp7->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    temp9->SourceLineNumber(9);
    temp9->SourceFileName(::STRINGS[5/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb5);
    return *__retval = __self1, void();
}

// public Template New(accountTopbar parent, accountTopbar parentInstance) :9
void accountTopbar__Template__New2_fn(::g::accountTopbar* parent, ::g::accountTopbar* parentInstance, accountTopbar__Template** __retval)
{
    *__retval = accountTopbar__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector accountTopbar__Template::__selector0_;
::g::Uno::UX::Selector accountTopbar__Template::__selector1_;

// public Template(accountTopbar parent, accountTopbar parentInstance) [instance] :9
void accountTopbar__Template::ctor_1(::g::accountTopbar* parent, ::g::accountTopbar* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(accountTopbar parent, accountTopbar parentInstance) [static] :9
accountTopbar__Template* accountTopbar__Template::New2(::g::accountTopbar* parent, ::g::accountTopbar* parentInstance)
{
    accountTopbar__Template* obj1 = (accountTopbar__Template*)uNew(accountTopbar__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
