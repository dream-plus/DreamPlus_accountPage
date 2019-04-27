[Uno.Compiler.UxGenerated]
public partial class accountHome: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly accountHome __parent;
        [Uno.WeakReference] internal readonly accountHome __parentInstance;
        public Template(accountHome parent, accountHome parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Sketch.moneylist();
            __self.Width = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Y = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
            __self.SourceLineNumber = 10;
            __self.SourceFileName = "Pages/account/accountHome.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly accountHome __parent;
        [Uno.WeakReference] internal readonly accountHome __parentInstance;
        public Template1(accountHome parent, accountHome parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<Fuse.Controls.TextAlignment> temp_TextAlignment_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<Fuse.Controls.TextAlignment> temp1_TextAlignment_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<Fuse.Controls.TextAlignment> temp2_TextAlignment_inst;
        global::Uno.UX.Property<Fuse.Layouts.Dock> temp3_DockPanel_Dock_inst;
        global::Uno.UX.Property<float4> __self_Margin_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("title");
            temp_TextAlignment_inst = new accountBook_FuseControlsTextControl_TextAlignment_Property(temp, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("opp");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp6 = new global::Fuse.Reactive.Data("content");
            temp1_TextAlignment_inst = new accountBook_FuseControlsTextControl_TextAlignment_Property(temp1, __selector1);
            var temp7 = new global::Fuse.Reactive.Data("opp");
            var temp8 = new global::Fuse.Reactive.Data("expense");
            var temp9 = "원";
            var temp10 = new global::Fuse.Reactive.Constant(temp9);
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp11 = new global::Fuse.Reactive.Add(temp8, temp10);
            temp2_TextAlignment_inst = new accountBook_FuseControlsTextControl_TextAlignment_Property(temp2, __selector1);
            var temp12 = new global::Fuse.Reactive.Data("opp");
            var temp3 = new global::Fuse.Controls.Rectangle();
            temp3_DockPanel_Dock_inst = new accountBook_FuseElementsElement_DockPanelDock_Property(temp3, __selector2);
            var temp13 = new global::Fuse.Reactive.Data("direction");
            var temp14 = 0;
            var temp15 = 0;
            __self_Margin_inst = new accountBook_FuseElementsElement_Margin_Property(__self, __selector3);
            var temp16 = new global::Fuse.Reactive.Vector();
            var temp17 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp18 = new global::Fuse.Reactive.DataBinding(temp_TextAlignment_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp19 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            var temp20 = new global::Fuse.Reactive.DataBinding(temp1_TextAlignment_inst, temp7, Fuse.Reactive.BindingMode.Default);
            var temp21 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
            var temp22 = new global::Fuse.Reactive.DataBinding(temp2_TextAlignment_inst, temp12, Fuse.Reactive.BindingMode.Default);
            var temp23 = new global::Fuse.Reactive.DataBinding(temp3_DockPanel_Dock_inst, temp13, Fuse.Reactive.BindingMode.Default);
            var temp24 = new global::Fuse.Reactive.Data("left");
            var temp25 = new global::Fuse.Reactive.Constant(temp14);
            var temp26 = new global::Fuse.Reactive.Data("right");
            var temp27 = new global::Fuse.Reactive.Constant(temp15);
            var temp28 = new global::Fuse.Reactive.DataBinding(__self_Margin_inst, temp16, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 11;
            __self.SourceFileName = "Pages/account/accountHome.ux";
            temp3.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
            temp3.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
            temp3.Alignment = Fuse.Elements.Alignment.Default;
            temp3.SourceLineNumber = 12;
            temp3.SourceFileName = "Pages/account/accountHome.ux";
            temp3.Children.Add(temp);
            temp3.Children.Add(temp1);
            temp3.Children.Add(temp2);
            temp3.Bindings.Add(temp23);
            temp.FontSize = 15f;
            temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
            temp.SourceLineNumber = 13;
            temp.SourceFileName = "Pages/account/accountHome.ux";
            temp.Bindings.Add(temp17);
            temp.Bindings.Add(temp18);
            temp4.SourceLineNumber = 13;
            temp4.SourceFileName = "Pages/account/accountHome.ux";
            temp5.SourceLineNumber = 13;
            temp5.SourceFileName = "Pages/account/accountHome.ux";
            temp1.FontSize = 15f;
            temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp1.Y = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            temp1.SourceLineNumber = 14;
            temp1.SourceFileName = "Pages/account/accountHome.ux";
            temp1.Bindings.Add(temp19);
            temp1.Bindings.Add(temp20);
            temp6.SourceLineNumber = 14;
            temp6.SourceFileName = "Pages/account/accountHome.ux";
            temp7.SourceLineNumber = 14;
            temp7.SourceFileName = "Pages/account/accountHome.ux";
            temp2.FontSize = 25f;
            temp2.Color = float4(0f, 0.4313726f, 0.6588235f, 1f);
            temp2.Y = new Uno.UX.Size(38f, Uno.UX.Unit.Unspecified);
            temp2.SourceLineNumber = 15;
            temp2.SourceFileName = "Pages/account/accountHome.ux";
            temp2.Bindings.Add(temp21);
            temp2.Bindings.Add(temp22);
            temp11.SourceLineNumber = 15;
            temp11.SourceFileName = "Pages/account/accountHome.ux";
            temp8.SourceLineNumber = 15;
            temp8.SourceFileName = "Pages/account/accountHome.ux";
            temp10.SourceLineNumber = 15;
            temp10.SourceFileName = "Pages/account/accountHome.ux";
            temp12.SourceLineNumber = 15;
            temp12.SourceFileName = "Pages/account/accountHome.ux";
            temp13.SourceLineNumber = 12;
            temp13.SourceFileName = "Pages/account/accountHome.ux";
            temp16.SourceLineNumber = 11;
            temp16.SourceFileName = "Pages/account/accountHome.ux";
            temp16.Arguments.Add(temp24);
            temp16.Arguments.Add(temp25);
            temp16.Arguments.Add(temp26);
            temp16.Arguments.Add(temp27);
            temp24.SourceLineNumber = 11;
            temp24.SourceFileName = "Pages/account/accountHome.ux";
            temp25.SourceLineNumber = 11;
            temp25.SourceFileName = "Pages/account/accountHome.ux";
            temp26.SourceLineNumber = 11;
            temp26.SourceFileName = "Pages/account/accountHome.ux";
            temp27.SourceLineNumber = 11;
            temp27.SourceFileName = "Pages/account/accountHome.ux";
            __self.Children.Add(temp3);
            __self.Bindings.Add(temp28);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "TextAlignment";
        static global::Uno.UX.Selector __selector2 = "DockPanel.Dock";
        static global::Uno.UX.Selector __selector3 = "Margin";
    }
    global::Uno.UX.Property<object> theEach_Items_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Reactive.Each theEach;
    internal global::Fuse.Controls.ScrollViewPager svp;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "theEach",
        "svp",
        "temp_eb4"
    };
    static accountHome()
    {
    }
    [global::Uno.UX.UXConstructor]
    public accountHome()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        theEach = new global::Fuse.Reactive.Each();
        theEach_Items_inst = new accountBook_FuseReactiveEach_Items_Property(theEach, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("items");
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new accountBook_FuseTriggersWhileBool_Value_Property(temp, __selector1);
        var temp2 = new global::Fuse.Reactive.Data("isLoading");
        var temp3 = new global::Fuse.Reactive.Data("loadMore");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.ScrollView();
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new Template(this, this);
        var temp8 = new Template1(this, this);
        var temp9 = new global::Fuse.Reactive.DataBinding(theEach_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Controls.Panel();
        var temp11 = new global::Fuse.Controls.Text();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        svp = new global::Fuse.Controls.ScrollViewPager();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp13 = new global::Fuse.Controls.Rectangle();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/account/accountHome.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Pages/account/accountHome.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/account/accountHome.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/account/accountHome.js"));
        temp5.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp5.SourceLineNumber = 6;
        temp5.SourceFileName = "Pages/account/accountHome.ux";
        temp5.Children.Add(temp6);
        temp5.Children.Add(svp);
        temp6.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp6.ItemSpacing = 10f;
        temp6.Margin = float4(0f, 190f, 0f, 0f);
        temp6.Padding = float4(0f, 50f, 0f, 0f);
        temp6.SourceLineNumber = 7;
        temp6.SourceFileName = "Pages/account/accountHome.ux";
        temp6.Children.Add(theEach);
        temp6.Children.Add(temp);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector2;
        theEach.SourceLineNumber = 9;
        theEach.SourceFileName = "Pages/account/accountHome.ux";
        theEach.Templates.Add(temp7);
        theEach.Templates.Add(temp8);
        theEach.Bindings.Add(temp9);
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/account/accountHome.ux";
        temp.SourceLineNumber = 20;
        temp.SourceFileName = "Pages/account/accountHome.ux";
        temp.Nodes.Add(temp10);
        temp.Bindings.Add(temp12);
        temp10.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp10.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp10.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp10.SourceLineNumber = 21;
        temp10.SourceFileName = "Pages/account/accountHome.ux";
        temp10.Children.Add(temp11);
        temp11.Value = "Loading...";
        temp11.Alignment = Fuse.Elements.Alignment.Center;
        temp11.SourceLineNumber = 22;
        temp11.SourceFileName = "Pages/account/accountHome.ux";
        temp2.SourceLineNumber = 20;
        temp2.SourceFileName = "Pages/account/accountHome.ux";
        svp.Name = __selector3;
        svp.SourceLineNumber = 27;
        svp.SourceFileName = "Pages/account/accountHome.ux";
        svp.ReachedEnd += temp_eb4.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb4);
        temp3.SourceLineNumber = 27;
        temp3.SourceFileName = "Pages/account/accountHome.ux";
        temp13.Color = float4(0.7568628f, 0.7568628f, 0.7568628f, 1f);
        temp13.Width = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(1000f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp13.SourceLineNumber = 31;
        temp13.SourceFileName = "Pages/account/accountHome.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(theEach);
        __g_nametable.Objects.Add(svp);
        __g_nametable.Objects.Add(temp_eb4);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp13);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "theEach";
    static global::Uno.UX.Selector __selector3 = "svp";
}
