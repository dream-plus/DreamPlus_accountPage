[Uno.Compiler.UxGenerated]
public partial class income: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly income __parent;
        [Uno.WeakReference] internal readonly income __parentInstance;
        public Template(income parent, income parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            __self.Color = float4(0f, 0.4235294f, 0.6666667f, 1f);
            __self.Width = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Y = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
            __self.SourceLineNumber = 14;
            __self.SourceFileName = "Pages/account/income.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly income __parent;
        [Uno.WeakReference] internal readonly income __parentInstance;
        public Template1(income parent, income parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("title");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp5 = new global::Fuse.Reactive.Data("content");
            var temp6 = new global::Fuse.Reactive.Data("expense");
            var temp7 = "원";
            var temp8 = new global::Fuse.Reactive.Constant(temp7);
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp9 = new global::Fuse.Reactive.Add(temp6, temp8);
            var temp3 = new global::Fuse.Controls.Text();
            temp3_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp3, __selector0);
            var temp10 = new global::Fuse.Reactive.Data("detail");
            var temp11 = new global::Fuse.Controls.Rectangle();
            var temp12 = new global::Fuse.Controls.StackPanel();
            var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
            var temp16 = new global::Fuse.Controls.Rectangle();
            var temp17 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
            __self.SourceLineNumber = 15;
            __self.SourceFileName = "Pages/account/income.ux";
            temp11.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
            temp11.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
            temp11.Alignment = Fuse.Elements.Alignment.Default;
            temp11.Margin = float4(10f, 0f, 0f, 0f);
            temp11.SourceLineNumber = 16;
            temp11.SourceFileName = "Pages/account/income.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Left);
            temp11.Children.Add(temp12);
            temp12.SourceLineNumber = 16;
            temp12.SourceFileName = "Pages/account/income.ux";
            temp12.Children.Add(temp);
            temp12.Children.Add(temp1);
            temp12.Children.Add(temp2);
            temp.FontSize = 16f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Right;
            temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
            temp.SourceLineNumber = 17;
            temp.SourceFileName = "Pages/account/income.ux";
            temp.Bindings.Add(temp13);
            temp4.SourceLineNumber = 17;
            temp4.SourceFileName = "Pages/account/income.ux";
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.FontSize = 15f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Right;
            temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp1.SourceLineNumber = 18;
            temp1.SourceFileName = "Pages/account/income.ux";
            temp1.Bindings.Add(temp14);
            temp5.SourceLineNumber = 18;
            temp5.SourceFileName = "Pages/account/income.ux";
            temp2.FontSize = 25f;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Right;
            temp2.Color = float4(0f, 0.4313726f, 0.6588235f, 1f);
            temp2.Alignment = Fuse.Elements.Alignment.Default;
            temp2.SourceLineNumber = 19;
            temp2.SourceFileName = "Pages/account/income.ux";
            temp2.Bindings.Add(temp15);
            temp9.SourceLineNumber = 19;
            temp9.SourceFileName = "Pages/account/income.ux";
            temp6.SourceLineNumber = 19;
            temp6.SourceFileName = "Pages/account/income.ux";
            temp8.SourceLineNumber = 19;
            temp8.SourceFileName = "Pages/account/income.ux";
            temp16.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
            temp16.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
            temp16.Alignment = Fuse.Elements.Alignment.Default;
            temp16.Margin = float4(0f, 0f, 10f, 0f);
            temp16.SourceLineNumber = 23;
            temp16.SourceFileName = "Pages/account/income.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Right);
            temp16.Children.Add(temp3);
            temp3.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp3.FontSize = 16f;
            temp3.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp3.Color = float4(0.6039216f, 0.6078432f, 0.6039216f, 1f);
            temp3.SourceLineNumber = 24;
            temp3.SourceFileName = "Pages/account/income.ux";
            temp3.Bindings.Add(temp17);
            temp10.SourceLineNumber = 24;
            temp10.SourceFileName = "Pages/account/income.ux";
            __self.Children.Add(temp11);
            __self.Children.Add(temp16);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object> theEach_Items_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Reactive.Each theEach;
    internal global::Fuse.Controls.ScrollViewPager svp;
    internal global::Fuse.Reactive.EventBinding temp_eb19;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "theEach",
        "svp",
        "temp_eb19"
    };
    static income()
    {
    }
    [global::Uno.UX.UXConstructor]
    public income(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
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
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::accountTopbar();
        var temp8 = new global::Fuse.Controls.ScrollView();
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new Template(this, this);
        var temp11 = new Template1(this, this);
        var temp12 = new global::Fuse.Reactive.DataBinding(theEach_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Controls.Panel();
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        svp = new global::Fuse.Controls.ScrollViewPager();
        temp_eb19 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp16 = new global::Fuse.Controls.Rectangle();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/account/income.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Pages/account/income.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/account/income.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/accountBook.js"));
        temp5.LineNumber = 4;
        temp5.FileName = "Pages/account/income.ux";
        temp5.SourceLineNumber = 4;
        temp5.SourceFileName = "Pages/account/income.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/account/income.js"));
        temp6.SourceLineNumber = 6;
        temp6.SourceFileName = "Pages/account/income.ux";
        temp6.Children.Add(temp7);
        temp7.SourceLineNumber = 7;
        temp7.SourceFileName = "Pages/account/income.ux";
        temp8.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp8.SourceLineNumber = 10;
        temp8.SourceFileName = "Pages/account/income.ux";
        temp8.Children.Add(temp9);
        temp8.Children.Add(svp);
        temp9.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp9.ItemSpacing = 10f;
        temp9.Margin = float4(0f, 190f, 0f, 0f);
        temp9.Padding = float4(0f, 50f, 0f, 0f);
        temp9.SourceLineNumber = 11;
        temp9.SourceFileName = "Pages/account/income.ux";
        temp9.Children.Add(theEach);
        temp9.Children.Add(temp);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector2;
        theEach.SourceLineNumber = 13;
        theEach.SourceFileName = "Pages/account/income.ux";
        theEach.Templates.Add(temp10);
        theEach.Templates.Add(temp11);
        theEach.Bindings.Add(temp12);
        temp1.SourceLineNumber = 13;
        temp1.SourceFileName = "Pages/account/income.ux";
        temp.SourceLineNumber = 31;
        temp.SourceFileName = "Pages/account/income.ux";
        temp.Nodes.Add(temp13);
        temp.Bindings.Add(temp15);
        temp13.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp13.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp13.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp13.SourceLineNumber = 32;
        temp13.SourceFileName = "Pages/account/income.ux";
        temp13.Children.Add(temp14);
        temp14.Value = "Loading...";
        temp14.Alignment = Fuse.Elements.Alignment.Center;
        temp14.SourceLineNumber = 33;
        temp14.SourceFileName = "Pages/account/income.ux";
        temp2.SourceLineNumber = 31;
        temp2.SourceFileName = "Pages/account/income.ux";
        svp.Name = __selector3;
        svp.SourceLineNumber = 38;
        svp.SourceFileName = "Pages/account/income.ux";
        svp.ReachedEnd += temp_eb19.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb19);
        temp3.SourceLineNumber = 38;
        temp3.SourceFileName = "Pages/account/income.ux";
        temp16.Color = float4(0.7568628f, 0.7568628f, 0.7568628f, 1f);
        temp16.Width = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(1000f, Uno.UX.Unit.Unspecified);
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.SourceLineNumber = 42;
        temp16.SourceFileName = "Pages/account/income.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(theEach);
        __g_nametable.Objects.Add(svp);
        __g_nametable.Objects.Add(temp_eb19);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp8);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "theEach";
    static global::Uno.UX.Selector __selector3 = "svp";
}
