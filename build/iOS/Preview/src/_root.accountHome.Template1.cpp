// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountHome.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseControlsTextControl_TextAlignment_Property.h>
#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.accountBook_FuseElementsElement_DockPanelDock_Property.h>
#include <_root.accountBook_FuseElementsElement_Margin_Property.h>
#include <_root.accountHome.h>
#include <_root.accountHome.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Reactive.Vector.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[13];
static uType* TYPES[3];

namespace g{

// public partial sealed class accountHome.Template1 :31
// {
// static Template1() :48
static void accountHome__Template1__cctor__fn(uType* __type)
{
    accountHome__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    accountHome__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextAlignment"*/]);
    accountHome__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"DockPanel.D...*/]);
    accountHome__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Margin"*/]);
}

static void accountHome__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("TextAlignment");
    ::STRINGS[2] = uString::Const("DockPanel.Dock");
    ::STRINGS[3] = uString::Const("Margin");
    ::STRINGS[4] = uString::Const("title");
    ::STRINGS[5] = uString::Const("opp");
    ::STRINGS[6] = uString::Const("content");
    ::STRINGS[7] = uString::Const("expense");
    ::STRINGS[8] = uString::Const("\354\233\220");
    ::STRINGS[9] = uString::Const("direction");
    ::STRINGS[10] = uString::Const("left");
    ::STRINGS[11] = uString::Const("right");
    ::STRINGS[12] = uString::Const("Pages/account/accountHome.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetFields(2,
        ::g::accountHome_typeof(), offsetof(accountHome__Template1, __parent1), uFieldFlagsWeak,
        ::g::accountHome_typeof(), offsetof(accountHome__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountHome__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Controls::TextAlignment_typeof(), NULL), offsetof(accountHome__Template1, temp_TextAlignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountHome__Template1, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Controls::TextAlignment_typeof(), NULL), offsetof(accountHome__Template1, temp1_TextAlignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountHome__Template1, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Controls::TextAlignment_typeof(), NULL), offsetof(accountHome__Template1, temp2_TextAlignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Layouts::Dock_typeof(), NULL), offsetof(accountHome__Template1, temp3_DockPanel_Dock_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(accountHome__Template1, __self_Margin_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountHome__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountHome__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountHome__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountHome__Template1::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)accountHome__Template1__New2_fn, 0, true, type, 2, ::g::accountHome_typeof(), ::g::accountHome_typeof()));
}

::g::Uno::UX::Template_type* accountHome__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 16;
    options.ObjectSize = sizeof(accountHome__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("accountHome.Template1", options);
    type->fp_build_ = accountHome__Template1_build;
    type->fp_cctor_ = accountHome__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))accountHome__Template1__New1_fn;
    return type;
}

// public Template1(accountHome parent, accountHome parentInstance) :35
void accountHome__Template1__ctor_1_fn(accountHome__Template1* __this, ::g::accountHome* parent, ::g::accountHome* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :51
void accountHome__Template1__New1_fn(accountHome__Template1* __this, uObject** __retval)
{
    uStackFrame __("accountHome.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp, accountHome__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"title"*/]);
    __this->temp_TextAlignment_inst = ::g::accountBook_FuseControlsTextControl_TextAlignment_Property::New1(temp, accountHome__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"opp"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp1, accountHome__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"content"*/]);
    __this->temp1_TextAlignment_inst = ::g::accountBook_FuseControlsTextControl_TextAlignment_Property::New1(temp1, accountHome__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"opp"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"expense"*/]);
    uString* temp9 = ::STRINGS[8/*"원"*/];
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(temp9);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp2, accountHome__Template1::__selector0_);
    ::g::Fuse::Reactive::Add* temp11 = ::g::Fuse::Reactive::Add::New1(temp8, temp10);
    __this->temp2_TextAlignment_inst = ::g::accountBook_FuseControlsTextControl_TextAlignment_Property::New1(temp2, accountHome__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"opp"*/]);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    __this->temp3_DockPanel_Dock_inst = ::g::accountBook_FuseElementsElement_DockPanelDock_Property::New1(temp3, accountHome__Template1::__selector2_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"direction"*/]);
    int32_t temp14 = 0;
    int32_t temp15 = 0;
    __this->__self_Margin_inst1 = ::g::accountBook_FuseElementsElement_Margin_Property::New1(__self1, accountHome__Template1::__selector3_);
    ::g::Fuse::Reactive::Vector* temp16 = ::g::Fuse::Reactive::Vector::New1();
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_TextAlignment_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_TextAlignment_inst, (uObject*)temp7, 3);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_TextAlignment_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_DockPanel_Dock_inst, (uObject*)temp13, 3);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"left"*/]);
    ::g::Fuse::Reactive::Constant* temp25 = ::g::Fuse::Reactive::Constant::New1(uBox<int32_t>(::g::Uno::Int_typeof(), temp14));
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"right"*/]);
    ::g::Fuse::Reactive::Constant* temp27 = ::g::Fuse::Reactive::Constant::New1(uBox<int32_t>(::g::Uno::Int_typeof(), temp15));
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Margin_inst1, (uObject*)temp16, 3);
    __self1->SourceLineNumber(11);
    __self1->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp3->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp3->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp3->Alignment(0);
    temp3->SourceLineNumber(12);
    temp3->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp->FontSize(15.0f);
    temp->Color(::g::Uno::Float4__New2(0.2627451f, 0.2666667f, 0.2627451f, 1.0f));
    temp->SourceLineNumber(13);
    temp->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp4->SourceLineNumber(13);
    temp4->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp5->SourceLineNumber(13);
    temp5->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp1->FontSize(15.0f);
    temp1->Color(::g::Uno::Float4__New2(0.2509804f, 0.254902f, 0.2509804f, 1.0f));
    temp1->Y(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->SourceLineNumber(14);
    temp1->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    temp6->SourceLineNumber(14);
    temp6->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp7->SourceLineNumber(14);
    temp7->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp2->FontSize(25.0f);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.4313726f, 0.6588235f, 1.0f));
    temp2->Y(::g::Uno::UX::Size__New1(38.0f, 1));
    temp2->SourceLineNumber(15);
    temp2->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp11->SourceLineNumber(15);
    temp11->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp8->SourceLineNumber(15);
    temp8->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp10->SourceLineNumber(15);
    temp10->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp12->SourceLineNumber(15);
    temp12->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp13->SourceLineNumber(12);
    temp13->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp16->SourceLineNumber(11);
    temp16->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Arguments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Arguments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Arguments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Arguments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/]), temp27);
    temp24->SourceLineNumber(11);
    temp24->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp25->SourceLineNumber(11);
    temp25->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp26->SourceLineNumber(11);
    temp26->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    temp27->SourceLineNumber(11);
    temp27->SourceFileName(::STRINGS[12/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    return *__retval = __self1, void();
}

// public Template1 New(accountHome parent, accountHome parentInstance) :35
void accountHome__Template1__New2_fn(::g::accountHome* parent, ::g::accountHome* parentInstance, accountHome__Template1** __retval)
{
    *__retval = accountHome__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector accountHome__Template1::__selector0_;
::g::Uno::UX::Selector accountHome__Template1::__selector1_;
::g::Uno::UX::Selector accountHome__Template1::__selector2_;
::g::Uno::UX::Selector accountHome__Template1::__selector3_;

// public Template1(accountHome parent, accountHome parentInstance) [instance] :35
void accountHome__Template1::ctor_1(::g::accountHome* parent, ::g::accountHome* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(accountHome parent, accountHome parentInstance) [static] :35
accountHome__Template1* accountHome__Template1::New2(::g::accountHome* parent, ::g::accountHome* parentInstance)
{
    accountHome__Template1* obj1 = (accountHome__Template1*)uNew(accountHome__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
