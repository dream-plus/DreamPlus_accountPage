// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountTopbar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_bundle.h>
#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.accountBook_FuseReactiveEach_Items_Property.h>
#include <_root.accountBook_FuseTriggersWhileBool_Value_Property.h>
#include <_root.accountTopbar.h>
#include <_root.accountTopbar.Template.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class accountTopbar :2
// {
// static accountTopbar() :86
static void accountTopbar__cctor_4_fn(uType* __type)
{
    accountTopbar::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    accountTopbar::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    accountTopbar::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Monthvalue"));
}

static void accountTopbar_build(uType* type)
{
    type->SetDependencies(
        ::g::accountBook_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(accountTopbar, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(accountTopbar, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(accountTopbar, temp2_Value_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(accountTopbar, Monthvalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(accountTopbar, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(accountTopbar, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(accountTopbar, temp_eb8), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(accountTopbar, temp_eb9), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountTopbar::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountTopbar::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&accountTopbar::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)accountTopbar__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* accountTopbar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 137;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(accountTopbar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("accountTopbar", options);
    type->fp_build_ = accountTopbar_build;
    type->fp_ctor_ = (void*)accountTopbar__New5_fn;
    type->fp_cctor_ = accountTopbar__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public accountTopbar() :90
void accountTopbar__ctor_8_fn(accountTopbar* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :94
void accountTopbar__InitializeUX_fn(accountTopbar* __this)
{
    __this->InitializeUX();
}

// public accountTopbar New() :90
void accountTopbar__New5_fn(accountTopbar** __retval)
{
    *__retval = accountTopbar::New5();
}

::g::Uno::UX::Selector accountTopbar::__selector0_;
::g::Uno::UX::Selector accountTopbar::__selector1_;
::g::Uno::UX::Selector accountTopbar::__selector2_;

// public accountTopbar() [instance] :90
void accountTopbar::ctor_8()
{
    uStackFrame __("accountTopbar", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :94
void accountTopbar::InitializeUX()
{
    uStackFrame __("accountTopbar", "InitializeUX()");
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::accountBook_FuseReactiveEach_Items_Property::New1(temp, accountTopbar::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("Month"));
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::accountBook_FuseTriggersWhileBool_Value_Property::New1(temp1, accountTopbar::__selector1_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("MonthisOpen"));
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(uString::Const("balance"));
    uString* temp6 = uString::Const("\354\233\220");
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(temp6);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(temp2, accountTopbar::__selector1_);
    ::g::Fuse::Reactive::Add* temp8 = ::g::Fuse::Reactive::Add::New1(temp5, temp7);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(uString::Const("MonthtoggleOpen"));
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(uString::Const("gotoIncome"));
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(uString::Const("gotoAddPage"));
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("gotoExpense"));
    ::g::Fuse::Controls::Rectangle* temp13 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp14 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.03137255f, 0.03137255f, 0.03137255f, 0.4980392f));
    ::g::Fuse::Controls::ScrollView* temp15 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    accountTopbar__Template* Monthtext = accountTopbar__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp3, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.9843137f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Image* temp20 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    Monthvalue = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp25 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp26 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Controls::Grid* temp27 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp29 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp30 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp31 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Fuse::Controls::Rectangle* temp32 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp33 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Gestures::Clicked* temp34 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp35 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11);
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp38 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp39 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12);
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Shadow* temp41 = ::g::Fuse::Controls::Shadow::New2();
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp1->SourceLineNumber(4);
    temp1->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp19);
    temp13->SourceLineNumber(5);
    temp13->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp13->Background(temp14);
    temp15->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp15->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp15->Layer(3);
    temp15->SourceLineNumber(6);
    temp15->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp15->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    temp16->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp16->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 210.0f));
    temp16->Padding(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp16->SourceLineNumber(7);
    temp16->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp->SourceLineNumber(8);
    temp->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Monthtext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp17);
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp4->SourceLineNumber(4);
    temp4->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp20->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp20->X(::g::Uno::UX::Size__New1(30.0f, 1));
    temp20->Y(::g::Uno::UX::Size__New1(70.0f, 1));
    temp20->SourceLineNumber(19);
    temp20->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp20->File(::g::Uno::UX::BundleFileSource::New1(::g::accountBook_bundle::logoGray6d2e0fed()));
    temp21->Value(uString::Const("000-0000-0000-00 (KEB\355\225\230\353\202\230)"));
    temp21->FontSize(10.0f);
    temp21->Color(::g::Uno::Float4__New2(0.627451f, 0.627451f, 0.627451f, 1.0f));
    temp21->X(::g::Uno::UX::Size__New1(30.0f, 1));
    temp21->Y(::g::Uno::UX::Size__New1(110.0f, 1));
    temp21->SourceLineNumber(20);
    temp21->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp2->FontSize(20.0f);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.4313726f, 0.6588235f, 1.0f));
    temp2->X(::g::Uno::UX::Size__New1(30.0f, 1));
    temp2->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp2->SourceLineNumber(21);
    temp2->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp22);
    temp8->SourceLineNumber(21);
    temp8->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp5->SourceLineNumber(21);
    temp5->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp7->SourceLineNumber(21);
    temp7->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp23->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp23->X(::g::Uno::UX::Size__New1(250.0f, 1));
    temp23->Y(::g::Uno::UX::Size__New1(140.0f, 1));
    temp23->SourceLineNumber(23);
    temp23->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp24);
    temp24->SourceLineNumber(24);
    temp24->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Monthvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    uPtr(Monthvalue)->Value(uString::Const("4\354\233\224 \354\202\254\354\232\251\353\202\264\354\227\255"));
    uPtr(Monthvalue)->FontSize(12.0f);
    uPtr(Monthvalue)->Name(accountTopbar::__selector2_);
    uPtr(Monthvalue)->SourceLineNumber(25);
    uPtr(Monthvalue)->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp25->SourceLineNumber(26);
    temp25->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb6);
    temp26->SourceLineNumber(27);
    temp26->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp26->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp9->SourceLineNumber(27);
    temp9->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp27->RowCount(1);
    temp27->ColumnCount(3);
    temp27->Color(::g::Uno::Float4__New2(0.4588235f, 0.6784314f, 0.8039216f, 1.0f));
    temp27->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp27->Alignment(2);
    temp27->Y(::g::Uno::UX::Size__New1(170.0f, 1));
    temp27->Opacity(1.0f);
    temp27->SourceLineNumber(32);
    temp27->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    temp28->SourceLineNumber(33);
    temp28->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp28, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp28, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp30);
    temp29->Value(uString::Const("\354\210\230\354\236\205"));
    temp29->TextWrapping(0);
    temp29->FontSize(11.0f);
    temp29->TextAlignment(1);
    temp29->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->X(::g::Uno::UX::Size__New1(15.0f, 1));
    temp29->Y(::g::Uno::UX::Size__New1(13.0f, 1));
    temp29->SourceLineNumber(34);
    temp29->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp30->SourceLineNumber(35);
    temp30->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb7);
    temp31->SourceLineNumber(36);
    temp31->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp31->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    temp10->SourceLineNumber(36);
    temp10->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp32->SourceLineNumber(40);
    temp32->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp32, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp32, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    temp33->Color(::g::Uno::Float4__New2(0.0f, 0.4313726f, 0.6588235f, 1.0f));
    temp33->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp33->SourceLineNumber(41);
    temp33->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp34->SourceLineNumber(42);
    temp34->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb8);
    temp35->SourceLineNumber(43);
    temp35->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp35->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    temp11->SourceLineNumber(43);
    temp11->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp36->SourceLineNumber(47);
    temp36->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp36, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp36, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp38);
    temp37->Value(uString::Const("\354\247\200\354\266\234"));
    temp37->TextWrapping(0);
    temp37->FontSize(11.0f);
    temp37->TextAlignment(1);
    temp37->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp37->X(::g::Uno::UX::Size__New1(1.0f, 1));
    temp37->Y(::g::Uno::UX::Size__New1(13.0f, 1));
    temp37->SourceLineNumber(48);
    temp37->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp38->SourceLineNumber(49);
    temp38->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb9);
    temp39->SourceLineNumber(50);
    temp39->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp39->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    temp12->SourceLineNumber(50);
    temp12->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    temp40->Color(::g::Uno::Float4__New2(0.9686275f, 0.9882353f, 1.0f, 1.0f));
    temp40->Height(::g::Uno::UX::Size__New1(190.0f, 1));
    temp40->Alignment(4);
    temp40->LayoutRole(0);
    temp40->SourceLineNumber(54);
    temp40->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    temp41->Color(::g::Uno::Float4__New2(0.7568628f, 0.7568628f, 0.7568628f, 1.0f));
    temp41->SourceLineNumber(55);
    temp41->SourceFileName(uString::Const("Pages/account/accountTopbar.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
}

// public accountTopbar New() [static] :90
accountTopbar* accountTopbar::New5()
{
    accountTopbar* obj1 = (accountTopbar*)uNew(accountTopbar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
