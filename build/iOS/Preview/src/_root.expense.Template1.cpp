// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/expense.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.expense.h>
#include <_root.expense.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
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
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[2];

namespace g{

// public partial sealed class expense.Template1 :34
// {
// static Template1() :47
static void expense__Template1__cctor__fn(uType* __type)
{
    expense__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void expense__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("content");
    ::STRINGS[3] = uString::Const("expense");
    ::STRINGS[4] = uString::Const("\354\233\220");
    ::STRINGS[5] = uString::Const("detail");
    ::STRINGS[6] = uString::Const("Pages/account/expense.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::expense_typeof(), offsetof(expense__Template1, __parent1), uFieldFlagsWeak,
        ::g::expense_typeof(), offsetof(expense__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(expense__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(expense__Template1, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(expense__Template1, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(expense__Template1, temp3_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&expense__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)expense__Template1__New2_fn, 0, true, type, 2, ::g::expense_typeof(), ::g::expense_typeof()));
}

::g::Uno::UX::Template_type* expense__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(expense__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("expense.Template1", options);
    type->fp_build_ = expense__Template1_build;
    type->fp_cctor_ = expense__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))expense__Template1__New1_fn;
    return type;
}

// public Template1(expense parent, expense parentInstance) :38
void expense__Template1__ctor_1_fn(expense__Template1* __this, ::g::expense* parent, ::g::expense* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :50
void expense__Template1__New1_fn(expense__Template1* __this, uObject** __retval)
{
    uStackFrame __("expense.Template1", "New()");
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp, expense__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"title"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp1, expense__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"content"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"expense"*/]);
    uString* temp7 = ::STRINGS[4/*"원"*/];
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(temp7);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp2, expense__Template1::__selector0_);
    ::g::Fuse::Reactive::Add* temp9 = ::g::Fuse::Reactive::Add::New1(temp6, temp8);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp3, expense__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"detail"*/]);
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp12 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp10, 3);
    __self1->SourceLineNumber(15);
    __self1->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    temp11->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp11->Alignment(0);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    temp11->SourceLineNumber(16);
    temp11->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp12->SourceLineNumber(16);
    temp12->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->Color(::g::Uno::Float4__New2(0.2627451f, 0.2666667f, 0.2627451f, 1.0f));
    temp->SourceLineNumber(17);
    temp->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp4->SourceLineNumber(17);
    temp4->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    temp1->TextWrapping(1);
    temp1->FontSize(15.0f);
    temp1->TextAlignment(0);
    temp1->Color(::g::Uno::Float4__New2(0.2509804f, 0.254902f, 0.2509804f, 1.0f));
    temp1->SourceLineNumber(18);
    temp1->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp5->SourceLineNumber(18);
    temp5->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    temp2->FontSize(25.0f);
    temp2->TextAlignment(0);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.4313726f, 0.6588235f, 1.0f));
    temp2->SourceLineNumber(19);
    temp2->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp9->SourceLineNumber(19);
    temp9->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    temp6->SourceLineNumber(19);
    temp6->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    temp8->SourceLineNumber(19);
    temp8->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    temp16->Width(::g::Uno::UX::Size__New1(160.0f, 1));
    temp16->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp16->Alignment(0);
    temp16->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    temp16->SourceLineNumber(23);
    temp16->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->TextWrapping(1);
    temp3->FontSize(13.0f);
    temp3->TextAlignment(2);
    temp3->Color(::g::Uno::Float4__New2(0.6039216f, 0.6078432f, 0.6039216f, 1.0f));
    temp3->SourceLineNumber(24);
    temp3->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp10->SourceLineNumber(24);
    temp10->SourceFileName(::STRINGS[6/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    return *__retval = __self1, void();
}

// public Template1 New(expense parent, expense parentInstance) :38
void expense__Template1__New2_fn(::g::expense* parent, ::g::expense* parentInstance, expense__Template1** __retval)
{
    *__retval = expense__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector expense__Template1::__selector0_;

// public Template1(expense parent, expense parentInstance) [instance] :38
void expense__Template1::ctor_1(::g::expense* parent, ::g::expense* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(expense parent, expense parentInstance) [static] :38
expense__Template1* expense__Template1::New2(::g::expense* parent, ::g::expense* parentInstance)
{
    expense__Template1* obj1 = (expense__Template1*)uNew(expense__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
