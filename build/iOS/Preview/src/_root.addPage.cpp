// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/addPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_bundle.h>
#include <_root.accountBook_FuseControlsImage_File_Property.h>
#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.accountBook_FuseControlsTextInputControl_Value_Property.h>
#include <_root.accountBook_FuseReactiveEach_Items_Property.h>
#include <_root.accountBook_FuseTriggersWhileBool_Value_Property.h>
#include <_root.accountTopbar.h>
#include <_root.addPage.h>
#include <_root.addPage.Template.h>
#include <_root.addPage.Template1.h>
#include <_root.addPage.Template2.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
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
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class addPage :2
// {
// static addPage() :214
static void addPage__cctor_4_fn(uType* __type)
{
    addPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 9, uString::Const("router"), uString::Const("selectvalue"), uString::Const("temp_eb11"), uString::Const("selectMonth"), uString::Const("temp_eb13"), uString::Const("selectDay"), uString::Const("temp_eb15"), uString::Const("temp_eb16"), uString::Const("temp_eb17"));
    addPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    addPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    addPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("File"));
    addPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("selectvalue"));
    addPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("selectMonth"));
    addPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("selectDay"));
}

static void addPage_build(uType* type)
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(addPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(addPage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(addPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, selectvalue_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(addPage, temp4_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(addPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, selectMonth_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(addPage, temp6_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(addPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, selectDay_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage, temp9_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(addPage, temp10_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(addPage, temp11_Value_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(addPage, selectvalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage, temp_eb11), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(addPage, selectMonth), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage, temp_eb13), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(addPage, selectDay), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage, temp_eb15), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage, temp_eb16), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage, temp_eb17), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(addPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&addPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)addPage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* addPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 158;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(addPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("addPage", options);
    type->fp_build_ = addPage_build;
    type->fp_cctor_ = addPage__cctor_4_fn;
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

// public addPage(Fuse.Navigation.Router router) :218
void addPage__ctor_8_fn(addPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :224
void addPage__InitializeUX_fn(addPage* __this)
{
    __this->InitializeUX();
}

// public addPage New(Fuse.Navigation.Router router) :218
void addPage__New5_fn(::g::Fuse::Navigation::Router* router1, addPage** __retval)
{
    *__retval = addPage::New5(router1);
}

uSStrong<uArray*> addPage::__g_static_nametable1_;
::g::Uno::UX::Selector addPage::__selector0_;
::g::Uno::UX::Selector addPage::__selector1_;
::g::Uno::UX::Selector addPage::__selector2_;
::g::Uno::UX::Selector addPage::__selector3_;
::g::Uno::UX::Selector addPage::__selector4_;
::g::Uno::UX::Selector addPage::__selector5_;

// public addPage(Fuse.Navigation.Router router) [instance] :218
void addPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("addPage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :224
void addPage::InitializeUX()
{
    uStackFrame __("addPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, addPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::accountBook_FuseReactiveEach_Items_Property::New1(temp, addPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("array"));
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::accountBook_FuseTriggersWhileBool_Value_Property::New1(temp1, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("selection"));
    selectvalue = ::g::Fuse::Controls::Text::New3();
    selectvalue_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(selectvalue, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("select"));
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("toggleChange"));
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::accountBook_FuseControlsTextInputControl_Value_Property::New1(temp2, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("title"));
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::accountBook_FuseControlsTextInputControl_Value_Property::New1(temp3, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(uString::Const("amount"));
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::accountBook_FuseReactiveEach_Items_Property::New1(temp4, addPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("monthValue"));
    ::g::Fuse::Triggers::WhileTrue* temp5 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp5_Value_inst = ::g::accountBook_FuseTriggersWhileBool_Value_Property::New1(temp5, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("monthToggle"));
    selectMonth = ::g::Fuse::Controls::Text::New3();
    selectMonth_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(selectMonth, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("monthInit"));
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("monthChange"));
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New4();
    temp6_Items_inst = ::g::accountBook_FuseReactiveEach_Items_Property::New1(temp6, addPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("dayValue"));
    ::g::Fuse::Triggers::WhileTrue* temp7 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp7_Value_inst = ::g::accountBook_FuseTriggersWhileBool_Value_Property::New1(temp7, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("dayToggle"));
    selectDay = ::g::Fuse::Controls::Text::New3();
    selectDay_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(selectDay, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("dayInit"));
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("dayChange"));
    ::g::Fuse::Controls::TextInput* temp8 = ::g::Fuse::Controls::TextInput::New3();
    temp8_Value_inst = ::g::accountBook_FuseControlsTextInputControl_Value_Property::New1(temp8, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("detail"));
    ::g::Fuse::Controls::TextInput* temp9 = ::g::Fuse::Controls::TextInput::New3();
    temp9_Value_inst = ::g::accountBook_FuseControlsTextInputControl_Value_Property::New1(temp9, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("based"));
    ::g::Fuse::Controls::Image* temp10 = ::g::Fuse::Controls::Image::New3();
    temp10_File_inst = ::g::accountBook_FuseControlsImage_File_Property::New1(temp10, addPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("imagePath"));
    ::g::Fuse::Triggers::WhileTrue* temp11 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp11_Value_inst = ::g::accountBook_FuseTriggersWhileBool_Value_Property::New1(temp11, addPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("photoView"));
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("takePicture"));
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("Save"));
    ::g::Fuse::Reactive::JavaScript* temp32 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp33 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp34 = ::g::Fuse::Controls::Panel::New3();
    ::g::accountTopbar* temp35 = ::g::accountTopbar::New5();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.03137255f, 0.03137255f, 0.03137255f, 0.4980392f));
    ::g::Fuse::Controls::ScrollView* temp38 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp39 = ::g::Fuse::Controls::StackPanel::New4();
    addPage__Template* Monthtext = addPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp12, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp41 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9647059f, 0.9843137f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp42 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::ScrollView* temp43 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp44 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp45 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp46 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(selectvalue_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Gestures::Clicked* temp48 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp49 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp51 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp16, 3);
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp55 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp56 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp59 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Grid* temp60 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp61 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ScrollView* temp62 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::Text* temp63 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp64 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp65 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp66 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp67 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp68 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp69 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp70 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp71 = ::g::Fuse::Controls::StackPanel::New4();
    addPage__Template1* temp72 = addPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Items_inst, (uObject*)temp18, 3);
    ::g::Fuse::Controls::Rectangle* temp74 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp75 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp76 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp19, 3);
    ::g::Fuse::Controls::Rectangle* temp77 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp78 = ::g::Fuse::Reactive::DataBinding::New1(selectMonth_Value_inst, (uObject*)temp20, 3);
    ::g::Fuse::Gestures::Clicked* temp79 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp80 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::Fuse::Controls::Rectangle* temp81 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp82 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp83 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp84 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp85 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp86 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp87 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp88 = ::g::Fuse::Controls::StackPanel::New4();
    addPage__Template2* temp89 = addPage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp90 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Items_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::Rectangle* temp91 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp92 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp93 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Rectangle* temp94 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp95 = ::g::Fuse::Reactive::DataBinding::New1(selectDay_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Gestures::Clicked* temp96 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp97 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    ::g::Fuse::Controls::Rectangle* temp98 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp99 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp100 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::Rectangle* temp101 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp102 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp103 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp104 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp105 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp106 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Controls::Rectangle* temp107 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp108 = ::g::Fuse::Reactive::DataBinding::New1(temp10_File_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::Rectangle* temp109 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp110 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp29, 3);
    ::g::Fuse::Controls::Image* temp111 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp112 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp113 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    ::g::Fuse::Controls::Rectangle* temp114 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp115 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp116 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp117 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb17 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp31);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp32->LineNumber(3);
    temp32->FileName(uString::Const("Pages/account/addPage.ux"));
    temp32->SourceLineNumber(3);
    temp32->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp32->File(::g::Uno::UX::BundleFileSource::New1(::g::accountBook_bundle::accountBook8f6bcc4a()));
    temp33->LineNumber(4);
    temp33->FileName(uString::Const("Pages/account/addPage.ux"));
    temp33->SourceLineNumber(4);
    temp33->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp33->File(::g::Uno::UX::BundleFileSource::New1(::g::accountBook_bundle::addPagefc6712a0()));
    temp34->SourceLineNumber(6);
    temp34->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    temp35->SourceLineNumber(7);
    temp35->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp1->SourceLineNumber(10);
    temp1->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp42);
    temp36->SourceLineNumber(11);
    temp36->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp36->Background(temp37);
    temp38->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp38->Layer(3);
    temp38->SourceLineNumber(12);
    temp38->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp38->Background(temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 20.0f));
    temp39->SourceLineNumber(13);
    temp39->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp->SourceLineNumber(14);
    temp->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Monthtext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp40);
    temp12->SourceLineNumber(14);
    temp12->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp13->SourceLineNumber(10);
    temp13->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp43->KeepFocusInView(false);
    temp43->SourceLineNumber(25);
    temp43->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    temp44->Orientation(1);
    temp44->ItemSpacing(10.0f);
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 190.0f, 0.0f, 0.0f));
    temp44->Padding(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp44->SourceLineNumber(26);
    temp44->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp114);
    temp45->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    temp45->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp45->Alignment(0);
    temp45->SourceLineNumber(28);
    temp45->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), selectvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp48);
    temp46->Color(::g::Uno::Float4__New2(0.5176471f, 0.6901961f, 0.7921569f, 1.0f));
    temp46->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp46->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp46->Alignment(0);
    temp46->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 300.0f, 0.0f));
    temp46->SourceLineNumber(29);
    temp46->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    uPtr(selectvalue)->FontSize(15.0f);
    uPtr(selectvalue)->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    uPtr(selectvalue)->Alignment(10);
    uPtr(selectvalue)->Name(addPage::__selector3_);
    uPtr(selectvalue)->SourceLineNumber(30);
    uPtr(selectvalue)->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumn(selectvalue, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(selectvalue)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp47);
    temp14->SourceLineNumber(30);
    temp14->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp48->SourceLineNumber(31);
    temp48->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb11);
    temp49->SourceLineNumber(32);
    temp49->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp49->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    temp15->SourceLineNumber(32);
    temp15->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp50->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp50->Alignment(0);
    temp50->SourceLineNumber(39);
    temp50->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    temp51->Color(::g::Uno::Float4__New2(0.5176471f, 0.6901961f, 0.7921569f, 1.0f));
    temp51->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp51->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp51->Alignment(0);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 300.0f, 0.0f));
    temp51->SourceLineNumber(40);
    temp51->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp2->PlaceholderText(uString::Const("\353\202\264\354\227\255"));
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.7960784f, 0.8f, 0.7960784f, 1.0f));
    temp2->FontSize(20.0f);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp2->Alignment(0);
    temp2->SourceLineNumber(41);
    temp2->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp52);
    temp16->SourceLineNumber(41);
    temp16->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp53->Color(::g::Uno::Float4__New2(0.572549f, 0.5764706f, 0.572549f, 1.0f));
    temp53->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp53->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp53->Margin(::g::Uno::Float4__New2(0.0f, 35.0f, 0.0f, 0.0f));
    temp53->SourceLineNumber(42);
    temp53->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp54->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp54->Alignment(0);
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp54->SourceLineNumber(46);
    temp54->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    temp55->Color(::g::Uno::Float4__New2(0.5176471f, 0.6901961f, 0.7921569f, 1.0f));
    temp55->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp55->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp55->Alignment(0);
    temp55->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 300.0f, 0.0f));
    temp55->SourceLineNumber(47);
    temp55->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp3->PlaceholderText(uString::Const("\352\270\210\354\225\241"));
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.7960784f, 0.8f, 0.7960784f, 1.0f));
    temp3->FontSize(20.0f);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->InputHint(4);
    temp3->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp3->Alignment(0);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp3->SourceLineNumber(48);
    temp3->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp3, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp56);
    temp17->SourceLineNumber(48);
    temp17->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp57->Color(::g::Uno::Float4__New2(0.572549f, 0.5764706f, 0.572549f, 1.0f));
    temp57->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp57->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp57->Margin(::g::Uno::Float4__New2(0.0f, 35.0f, 0.0f, 0.0f));
    temp57->SourceLineNumber(49);
    temp57->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp58->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp58->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp58->Alignment(0);
    temp58->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp58->SourceLineNumber(55);
    temp58->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp60);
    temp59->Color(::g::Uno::Float4__New2(0.5176471f, 0.6901961f, 0.7921569f, 1.0f));
    temp59->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp59->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp59->Alignment(0);
    temp59->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 300.0f, 0.0f));
    temp59->SourceLineNumber(56);
    temp59->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp60->RowCount(1);
    temp60->ColumnCount(5);
    temp60->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp60->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp60->SourceLineNumber(57);
    temp60->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp82);
    temp61->SourceLineNumber(58);
    temp61->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    temp62->SourceLineNumber(59);
    temp62->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    temp63->Value(uString::Const("2019"));
    temp63->FontSize(20.0f);
    temp63->TextColor(::g::Uno::Float4__New2(0.654902f, 0.6627451f, 0.6627451f, 1.0f));
    temp63->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp63->Alignment(10);
    temp63->SourceLineNumber(60);
    temp63->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp63, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp63, 1);
    temp64->Color(::g::Uno::Float4__New2(0.5019608f, 0.7098039f, 0.827451f, 1.0f));
    temp64->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp64->SourceLineNumber(64);
    temp64->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp65->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp65->SourceLineNumber(67);
    temp65->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    temp5->SourceLineNumber(68);
    temp5->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp76);
    temp66->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp66->Alignment(4);
    temp66->Opacity(0.715f);
    temp66->SourceLineNumber(69);
    temp66->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp66->Background(temp67);
    temp68->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp68->Alignment(12);
    temp68->Opacity(0.715f);
    temp68->SourceLineNumber(70);
    temp68->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp68->Background(temp69);
    temp70->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp70->SourceLineNumber(71);
    temp70->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp71);
    temp71->ItemSpacing(10.0f);
    temp71->Alignment(4);
    temp71->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp71->SourceLineNumber(72);
    temp71->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    temp4->SourceLineNumber(73);
    temp4->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp73);
    temp18->SourceLineNumber(73);
    temp18->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp74->SourceLineNumber(82);
    temp74->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp74->Background(temp75);
    temp19->SourceLineNumber(68);
    temp19->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp77->SourceLineNumber(84);
    temp77->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), selectMonth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp79);
    uPtr(selectMonth)->FontSize(20.0f);
    uPtr(selectMonth)->TextAlignment(1);
    uPtr(selectMonth)->TextColor(::g::Uno::Float4__New2(0.654902f, 0.6627451f, 0.6627451f, 1.0f));
    uPtr(selectMonth)->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(selectMonth)->Alignment(10);
    uPtr(selectMonth)->Name(addPage::__selector4_);
    uPtr(selectMonth)->SourceLineNumber(85);
    uPtr(selectMonth)->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(selectMonth, 0);
    ::g::Fuse::Controls::Grid::SetColumn(selectMonth, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(selectMonth)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp78);
    temp20->SourceLineNumber(85);
    temp20->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp79->SourceLineNumber(86);
    temp79->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb13);
    temp80->SourceLineNumber(87);
    temp80->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp80->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    temp21->SourceLineNumber(87);
    temp21->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp81->Color(::g::Uno::Float4__New2(0.5019608f, 0.7098039f, 0.827451f, 1.0f));
    temp81->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp81->SourceLineNumber(93);
    temp81->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp82->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp82->SourceLineNumber(96);
    temp82->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp94);
    temp7->SourceLineNumber(97);
    temp7->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp93);
    temp83->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp83->Alignment(4);
    temp83->Opacity(0.715f);
    temp83->SourceLineNumber(98);
    temp83->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp83->Background(temp84);
    temp85->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp85->Alignment(12);
    temp85->Opacity(0.715f);
    temp85->SourceLineNumber(99);
    temp85->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp85->Background(temp86);
    temp87->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp87->SourceLineNumber(100);
    temp87->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp88);
    temp88->ItemSpacing(10.0f);
    temp88->Alignment(0);
    temp88->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp88->SourceLineNumber(101);
    temp88->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    temp6->SourceLineNumber(102);
    temp6->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp90);
    temp22->SourceLineNumber(102);
    temp22->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp91->SourceLineNumber(111);
    temp91->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp91->Background(temp92);
    temp23->SourceLineNumber(97);
    temp23->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp94->SourceLineNumber(113);
    temp94->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), selectDay);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp94->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp96);
    uPtr(selectDay)->FontSize(20.0f);
    uPtr(selectDay)->TextAlignment(1);
    uPtr(selectDay)->TextColor(::g::Uno::Float4__New2(0.654902f, 0.6627451f, 0.6627451f, 1.0f));
    uPtr(selectDay)->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(selectDay)->Alignment(10);
    uPtr(selectDay)->Name(addPage::__selector5_);
    uPtr(selectDay)->SourceLineNumber(114);
    uPtr(selectDay)->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(selectDay, 0);
    ::g::Fuse::Controls::Grid::SetColumn(selectDay, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(selectDay)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp95);
    temp24->SourceLineNumber(114);
    temp24->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp96->SourceLineNumber(115);
    temp96->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp97);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp96->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb15);
    temp97->SourceLineNumber(116);
    temp97->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp97->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    temp25->SourceLineNumber(116);
    temp25->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp98->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp98->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp98->Alignment(0);
    temp98->SourceLineNumber(124);
    temp98->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp101);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp103);
    temp99->Color(::g::Uno::Float4__New2(0.5176471f, 0.6901961f, 0.7921569f, 1.0f));
    temp99->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp99->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp99->Alignment(4);
    temp99->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 300.0f, 0.0f));
    temp99->SourceLineNumber(125);
    temp99->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp8->PlaceholderText(uString::Const("\354\204\270\353\266\200\353\202\264\354\232\251"));
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.7960784f, 0.8f, 0.7960784f, 1.0f));
    temp8->TextWrapping(1);
    temp8->LineSpacing(20.0f);
    temp8->FontSize(13.0f);
    temp8->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp8->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp8->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp8->Alignment(4);
    temp8->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp8->SourceLineNumber(126);
    temp8->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp8, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp8, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp100);
    temp26->SourceLineNumber(126);
    temp26->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp101->Color(::g::Uno::Float4__New2(0.6352941f, 0.6392157f, 0.6352941f, 1.0f));
    temp101->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp101->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp101->Alignment(4);
    temp101->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp101->SourceLineNumber(127);
    temp101->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp102->Color(::g::Uno::Float4__New2(0.6352941f, 0.6392157f, 0.6352941f, 1.0f));
    temp102->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp102->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp102->Alignment(4);
    temp102->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp102->SourceLineNumber(128);
    temp102->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp103->Color(::g::Uno::Float4__New2(0.6352941f, 0.6392157f, 0.6352941f, 1.0f));
    temp103->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp103->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp103->Alignment(4);
    temp103->Margin(::g::Uno::Float4__New2(0.0f, 85.0f, 0.0f, 0.0f));
    temp103->SourceLineNumber(129);
    temp103->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp104->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp104->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp104->Alignment(12);
    temp104->SourceLineNumber(133);
    temp104->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp105);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp111);
    temp105->Color(::g::Uno::Float4__New2(0.5176471f, 0.6901961f, 0.7921569f, 1.0f));
    temp105->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    temp105->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp105->Alignment(4);
    temp105->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 300.0f, 0.0f));
    temp105->SourceLineNumber(134);
    temp105->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp9->PlaceholderText(uString::Const("\352\267\274\352\261\260 ( \354\202\254\354\247\204, \354\230\201\354\210\230\354\246\235 \353\223\261 )"));
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.7960784f, 0.8f, 0.7960784f, 1.0f));
    temp9->FontSize(13.0f);
    temp9->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp9->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp9->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp9->Alignment(4);
    temp9->SourceLineNumber(135);
    temp9->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp9, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp9, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp106);
    temp27->SourceLineNumber(135);
    temp27->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp107->Color(::g::Uno::Float4__New2(0.6352941f, 0.6392157f, 0.6352941f, 1.0f));
    temp107->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp107->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp107->Alignment(4);
    temp107->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp107->SourceLineNumber(136);
    temp107->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp11->SourceLineNumber(138);
    temp11->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp110);
    temp10->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp10->Height(::g::Uno::UX::Size__New1(180.0f, 1));
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp10->SourceLineNumber(139);
    temp10->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp108);
    temp28->SourceLineNumber(139);
    temp28->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp109->Color(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp109->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp109->Height(::g::Uno::UX::Size__New1(180.0f, 1));
    temp109->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp109->SourceLineNumber(140);
    temp109->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp29->SourceLineNumber(138);
    temp29->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp111->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp111->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp111->SourceLineNumber(143);
    temp111->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp111->File(::g::Uno::UX::BundleFileSource::New1(::g::accountBook_bundle::photocamera99eb8f4b()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp111->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp112);
    temp112->SourceLineNumber(144);
    temp112->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb16);
    temp113->SourceLineNumber(145);
    temp113->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp113->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    temp30->SourceLineNumber(145);
    temp30->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp114->Color(::g::Uno::Float4__New2(0.4588235f, 0.654902f, 0.7647059f, 1.0f));
    temp114->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp114->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp114->Alignment(0);
    temp114->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp114->SourceLineNumber(151);
    temp114->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp114->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp116);
    temp115->Value(uString::Const("\354\240\200\354\236\245"));
    temp115->FontSize(13.0f);
    temp115->TextAlignment(1);
    temp115->TextColor(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp115->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp115->Alignment(10);
    temp115->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp115->SourceLineNumber(152);
    temp115->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp115, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp115, 1);
    temp116->SourceLineNumber(153);
    temp116->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp117);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp116->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb17);
    temp117->SourceLineNumber(154);
    temp117->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    temp117->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb17)));
    temp31->SourceLineNumber(154);
    temp31->SourceFileName(uString::Const("Pages/account/addPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), selectvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), selectMonth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), selectDay);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
}

// public addPage New(Fuse.Navigation.Router router) [static] :218
addPage* addPage::New5(::g::Fuse::Navigation::Router* router1)
{
    addPage* obj1 = (addPage*)uNew(addPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
