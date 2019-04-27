[Uno.Compiler.UxGenerated]
public partial class notice: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly notice __parent;
        [Uno.WeakReference] internal readonly notice __parentInstance;
        public Template(notice parent, notice parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb23;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Grid();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("title");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp5 = new global::Fuse.Reactive.Data("name");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp6 = new global::Fuse.Reactive.Data("content");
            var temp3 = new global::Fuse.Controls.Text();
            temp3_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp3, __selector0);
            var temp7 = new global::Fuse.Reactive.Data("days");
            var temp8 = new global::Fuse.Reactive.Data("gotoDetails");
            var temp9 = new global::Fuse.Controls.Text();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Controls.Text();
            var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
            temp_eb23 = new global::Fuse.Reactive.EventBinding(temp8);
            __self.RowCount = 2;
            __self.Columns = "1*,3*,1*";
            __self.ColumnCount = 3;
            __self.ChildOrder = Fuse.Layouts.GridChildOrder.RowMajor;
            __self.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Margin = float4(0f, 2f, 0f, 0f);
            __self.SourceLineNumber = 8;
            __self.SourceFileName = "Pages/board/notice.ux";
            global::Fuse.Controls.DockPanel.SetDock(__self, Fuse.Layouts.Dock.Top);
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb23.OnEvent);
            temp9.Value = "다온";
            temp9.FontSize = 10f;
            temp9.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp9.TextColor = float4(0f, 0f, 0f, 1f);
            temp9.Alignment = Fuse.Elements.Alignment.Center;
            temp9.SourceLineNumber = 9;
            temp9.SourceFileName = "Pages/board/notice.ux";
            temp.FontSize = 12f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp.TextColor = float4(0f, 0f, 0f, 1f);
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.SourceLineNumber = 10;
            temp.SourceFileName = "Pages/board/notice.ux";
            temp.Bindings.Add(temp10);
            temp4.SourceLineNumber = 10;
            temp4.SourceFileName = "Pages/board/notice.ux";
            temp11.SourceLineNumber = 11;
            temp11.SourceFileName = "Pages/board/notice.ux";
            temp1.FontSize = 10f;
            temp1.TextColor = float4(0.7568628f, 0.7607843f, 0.7568628f, 1f);
            temp1.Alignment = Fuse.Elements.Alignment.Center;
            temp1.SourceLineNumber = 12;
            temp1.SourceFileName = "Pages/board/notice.ux";
            temp1.Bindings.Add(temp12);
            temp5.SourceLineNumber = 12;
            temp5.SourceFileName = "Pages/board/notice.ux";
            temp2.FontSize = 12f;
            temp2.TextColor = float4(0.7568628f, 0.7607843f, 0.7568628f, 1f);
            temp2.Alignment = Fuse.Elements.Alignment.Center;
            temp2.SourceLineNumber = 13;
            temp2.SourceFileName = "Pages/board/notice.ux";
            temp2.Bindings.Add(temp13);
            temp6.SourceLineNumber = 13;
            temp6.SourceFileName = "Pages/board/notice.ux";
            temp3.FontSize = 10f;
            temp3.TextColor = float4(0.7568628f, 0.7607843f, 0.7568628f, 1f);
            temp3.Alignment = Fuse.Elements.Alignment.CenterLeft;
            temp3.SourceLineNumber = 14;
            temp3.SourceFileName = "Pages/board/notice.ux";
            temp3.Bindings.Add(temp14);
            temp7.SourceLineNumber = 14;
            temp7.SourceFileName = "Pages/board/notice.ux";
            temp8.SourceLineNumber = 8;
            temp8.SourceFileName = "Pages/board/notice.ux";
            __self.Children.Add(temp9);
            __self.Children.Add(temp);
            __self.Children.Add(temp11);
            __self.Children.Add(temp1);
            __self.Children.Add(temp2);
            __self.Children.Add(temp3);
            __self.Bindings.Add(temp_eb23);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly notice __parent;
        [Uno.WeakReference] internal readonly notice __parentInstance;
        public Template1(notice parent, notice parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Rectangle();
            __self.Color = float4(0.8901961f, 0.8941177f, 0.8901961f, 1f);
            __self.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
            __self.SourceLineNumber = 16;
            __self.SourceFileName = "Pages/board/notice.ux";
            return __self;
        }
    }
    global::Uno.UX.Property<object> theEach_Items_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Reactive.Each theEach;
    internal global::Fuse.Controls.ScrollViewPager svp;
    internal global::Fuse.Reactive.EventBinding temp_eb24;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "theEach",
        "svp",
        "temp_eb24"
    };
    static notice()
    {
    }
    [global::Uno.UX.UXConstructor]
    public notice()
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
        temp_eb24 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp13 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9960784f, 1f, 0.9960784f, 1f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/board/notice.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Pages/board/notice.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/board/notice.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/board/notice.js"));
        temp5.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp5.SourceLineNumber = 5;
        temp5.SourceFileName = "Pages/board/notice.ux";
        temp5.Background = temp13;
        temp5.Children.Add(temp6);
        temp5.Children.Add(svp);
        temp6.SourceLineNumber = 6;
        temp6.SourceFileName = "Pages/board/notice.ux";
        temp6.Children.Add(theEach);
        temp6.Children.Add(temp);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector2;
        theEach.SourceLineNumber = 7;
        theEach.SourceFileName = "Pages/board/notice.ux";
        theEach.Templates.Add(temp7);
        theEach.Templates.Add(temp8);
        theEach.Bindings.Add(temp9);
        temp1.SourceLineNumber = 7;
        temp1.SourceFileName = "Pages/board/notice.ux";
        temp.SourceLineNumber = 19;
        temp.SourceFileName = "Pages/board/notice.ux";
        temp.Nodes.Add(temp10);
        temp.Bindings.Add(temp12);
        temp10.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp10.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp10.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp10.SourceLineNumber = 20;
        temp10.SourceFileName = "Pages/board/notice.ux";
        temp10.Children.Add(temp11);
        temp11.Value = "Loading…";
        temp11.Alignment = Fuse.Elements.Alignment.Center;
        temp11.SourceLineNumber = 21;
        temp11.SourceFileName = "Pages/board/notice.ux";
        temp2.SourceLineNumber = 19;
        temp2.SourceFileName = "Pages/board/notice.ux";
        svp.Name = __selector3;
        svp.SourceLineNumber = 27;
        svp.SourceFileName = "Pages/board/notice.ux";
        svp.ReachedEnd += temp_eb24.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb24);
        temp3.SourceLineNumber = 27;
        temp3.SourceFileName = "Pages/board/notice.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(theEach);
        __g_nametable.Objects.Add(svp);
        __g_nametable.Objects.Add(temp_eb24);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "theEach";
    static global::Uno.UX.Selector __selector3 = "svp";
}
