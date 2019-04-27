[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("home", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::home(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 42;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 43;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "home";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base("boardMain", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::boardMain(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 47;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 48;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "boardMain";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base("schedule", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::schedule(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 52;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 53;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "schedule";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base("accountBook", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::accountBook(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 57;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 58;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "accountBook";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template4(MainView parent, MainView parentInstance): base("income", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::income(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 62;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 63;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "income";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template5: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template5(MainView parent, MainView parentInstance): base("expense", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template5()
        {
        }
        public override object New()
        {
            var __self = new global::expense(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 67;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 68;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "expense";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template6: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template6(MainView parent, MainView parentInstance): base("addPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template6()
        {
        }
        public override object New()
        {
            var __self = new global::addPage(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 72;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 73;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "addPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template7: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template7(MainView parent, MainView parentInstance): base("boardMain", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template7()
        {
        }
        public override object New()
        {
            var __self = new global::boardMain(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 77;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 78;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "boardMain";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template8: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template8(MainView parent, MainView parentInstance): base("write", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template8()
        {
        }
        public override object New()
        {
            var __self = new global::write(__parent.router);
            var temp = new global::Fuse.Triggers.Transition();
            var temp1 = new global::Fuse.Animations.Move();
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 82;
            __self.SourceFileName = "MainView.ux";
            temp.SourceLineNumber = 83;
            temp.SourceFileName = "MainView.ux";
            temp.Animators.Add(temp1);
            temp1.X = 1f;
            temp1.RelativeTo = Fuse.TranslationModes.ParentSize;
            __self.Children.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "write";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template9: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template9(MainView parent, MainView parentInstance): base("detailPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template9()
        {
        }
        public override object New()
        {
            var __self = new global::detailPage(__parent.router);
            __self.Color = float4(1f, 1f, 1f, 1f);
            __self.Name = __selector0;
            __self.SourceLineNumber = 92;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "detailPage";
    }
    internal global::Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0",
        "temp_eb1",
        "temp_eb2",
        "temp_eb3"
    };
    internal global::Fuse.Reactive.FuseJS.DiagnosticsImplModule FuseReactiveFuseJSDiagnosticsImplModule;
    internal global::Fuse.Reactive.FuseJS.Http FuseReactiveFuseJSHttp;
    internal global::Fuse.Reactive.FuseJS.TimerModule FuseReactiveFuseJSTimerModule;
    internal global::Fuse.Drawing.BrushConverter FuseDrawingBrushConverter;
    internal global::Fuse.Triggers.BusyTaskModule FuseTriggersBusyTaskModule;
    internal global::Fuse.Testing.UnoTestingHelper FuseTestingUnoTestingHelper;
    internal global::Fuse.FileSystem.FileSystemModule FuseFileSystemFileSystemModule;
    internal global::Fuse.Storage.StorageModule FuseStorageStorageModule;
    internal global::Fuse.ImageTools.ImageTools FuseImageToolsImageTools;
    internal global::Fuse.Camera.Camera FuseCameraCamera;
    internal global::Fuse.WebSocket.WebSocketClientModule FuseWebSocketWebSocketClientModule;
    internal global::Polyfills.Window.WindowModule PolyfillsWindowWindowModule;
    internal global::FuseJS.Globals FuseJSGlobals;
    internal global::FuseJS.Lifecycle FuseJSLifecycle;
    internal global::FuseJS.Environment FuseJSEnvironment;
    internal global::FuseJS.Base64 FuseJSBase64;
    internal global::FuseJS.Bundle FuseJSBundle;
    internal global::FuseJS.FileReaderImpl FuseJSFileReaderImpl;
    internal global::FuseJS.UserEvents FuseJSUserEvents;
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Reactive.DeviceCaps.Device, "Device");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        FuseReactiveFuseJSDiagnosticsImplModule = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        FuseReactiveFuseJSHttp = new global::Fuse.Reactive.FuseJS.Http();
        FuseReactiveFuseJSTimerModule = new global::Fuse.Reactive.FuseJS.TimerModule();
        FuseDrawingBrushConverter = new global::Fuse.Drawing.BrushConverter();
        FuseTriggersBusyTaskModule = new global::Fuse.Triggers.BusyTaskModule();
        FuseTestingUnoTestingHelper = new global::Fuse.Testing.UnoTestingHelper();
        FuseFileSystemFileSystemModule = new global::Fuse.FileSystem.FileSystemModule();
        FuseStorageStorageModule = new global::Fuse.Storage.StorageModule();
        FuseImageToolsImageTools = new global::Fuse.ImageTools.ImageTools();
        FuseCameraCamera = new global::Fuse.Camera.Camera();
        FuseWebSocketWebSocketClientModule = new global::Fuse.WebSocket.WebSocketClientModule();
        PolyfillsWindowWindowModule = new global::Polyfills.Window.WindowModule();
        FuseJSGlobals = new global::FuseJS.Globals();
        FuseJSLifecycle = new global::FuseJS.Lifecycle();
        FuseJSEnvironment = new global::FuseJS.Environment();
        FuseJSBase64 = new global::FuseJS.Base64();
        FuseJSBundle = new global::FuseJS.Bundle();
        FuseJSFileReaderImpl = new global::FuseJS.FileReaderImpl();
        FuseJSUserEvents = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("gotoHome");
        var temp1 = new global::Fuse.Reactive.Data("gotoBoard");
        var temp2 = new global::Fuse.Reactive.Data("gotoSchedule");
        var temp3 = new global::Fuse.Reactive.Data("gotoAccount");
        router = new global::Fuse.Navigation.Router();
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.Panel();
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Controls.Shadow();
        var temp8 = new global::Fuse.Controls.Panel();
        var temp9 = new global::Fuse.Controls.Image();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp);
        var temp13 = new global::Fuse.Controls.Panel();
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Gestures.Clicked();
        var temp16 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp17 = new global::Fuse.Controls.Panel();
        var temp18 = new global::Fuse.Controls.Text();
        var temp19 = new global::Fuse.Gestures.Clicked();
        var temp20 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp21 = new global::Fuse.Controls.Panel();
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Gestures.Clicked();
        var temp24 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp25 = new global::Fuse.Controls.Navigator();
        var home = new Template(this, this);
        var boardMain = new Template1(this, this);
        var schedule = new Template2(this, this);
        var accountBook = new Template3(this, this);
        var income = new Template4(this, this);
        var expense = new Template5(this, this);
        var addPage = new Template6(this, this);
        var boardMain1 = new Template7(this, this);
        var write = new Template8(this, this);
        var detailPage = new Template9(this, this);
        router.Name = __selector0;
        router.SourceLineNumber = 3;
        router.SourceFileName = "MainView.ux";
        temp4.LineNumber = 4;
        temp4.FileName = "MainView.ux";
        temp4.SourceLineNumber = 4;
        temp4.SourceFileName = "MainView.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../MainView.js"));
        temp5.Alignment = Fuse.Elements.Alignment.Bottom;
        temp5.SourceLineNumber = 5;
        temp5.SourceFileName = "MainView.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Bottom);
        temp5.Children.Add(temp6);
        temp6.RowCount = 1;
        temp6.ColumnCount = 4;
        temp6.ChildOrder = Fuse.Layouts.GridChildOrder.ColumnMajor;
        temp6.Color = float4(0.9843137f, 0.9882353f, 0.9843137f, 1f);
        temp6.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp6.Alignment = Fuse.Elements.Alignment.Bottom;
        temp6.Opacity = 1f;
        temp6.LayoutRole = Fuse.LayoutRole.Standard;
        temp6.SourceLineNumber = 6;
        temp6.SourceFileName = "MainView.ux";
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp6.Children.Add(temp13);
        temp6.Children.Add(temp17);
        temp6.Children.Add(temp21);
        temp7.Angle = 179f;
        temp7.Color = float4(0.6745098f, 0.6745098f, 0.6745098f, 1f);
        temp7.SourceLineNumber = 7;
        temp7.SourceFileName = "MainView.ux";
        temp8.Alignment = Fuse.Elements.Alignment.Default;
        temp8.SourceLineNumber = 8;
        temp8.SourceFileName = "MainView.ux";
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp8.Children.Add(temp11);
        temp9.Width = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp9.Alignment = Fuse.Elements.Alignment.Default;
        temp9.Y = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
        temp9.SourceLineNumber = 9;
        temp9.SourceFileName = "MainView.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/logoGray.png"));
        temp10.Value = "홈";
        temp10.FontSize = 10f;
        temp10.TextColor = float4(0.5647059f, 0.5686275f, 0.5686275f, 1f);
        temp10.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp10.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp10.SourceLineNumber = 10;
        temp10.SourceFileName = "MainView.ux";
        temp11.SourceLineNumber = 11;
        temp11.SourceFileName = "MainView.ux";
        temp11.Actions.Add(temp12);
        temp11.Bindings.Add(temp_eb0);
        temp12.SourceLineNumber = 12;
        temp12.SourceFileName = "MainView.ux";
        temp12.Handler += temp_eb0.OnEvent;
        temp.SourceLineNumber = 12;
        temp.SourceFileName = "MainView.ux";
        temp13.Alignment = Fuse.Elements.Alignment.Default;
        temp13.SourceLineNumber = 16;
        temp13.SourceFileName = "MainView.ux";
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp15);
        temp14.Value = "게시판";
        temp14.FontSize = 10f;
        temp14.TextColor = float4(0.5921569f, 0.6f, 0.5960785f, 1f);
        temp14.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp14.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp14.SourceLineNumber = 17;
        temp14.SourceFileName = "MainView.ux";
        temp15.SourceLineNumber = 18;
        temp15.SourceFileName = "MainView.ux";
        temp15.Actions.Add(temp16);
        temp15.Bindings.Add(temp_eb1);
        temp16.SourceLineNumber = 19;
        temp16.SourceFileName = "MainView.ux";
        temp16.Handler += temp_eb1.OnEvent;
        temp1.SourceLineNumber = 19;
        temp1.SourceFileName = "MainView.ux";
        temp17.Alignment = Fuse.Elements.Alignment.Default;
        temp17.SourceLineNumber = 23;
        temp17.SourceFileName = "MainView.ux";
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp19);
        temp18.Value = "스케줄";
        temp18.FontSize = 10f;
        temp18.TextColor = float4(0.5921569f, 0.6039216f, 0.5960785f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp18.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp18.SourceLineNumber = 24;
        temp18.SourceFileName = "MainView.ux";
        temp19.SourceLineNumber = 25;
        temp19.SourceFileName = "MainView.ux";
        temp19.Actions.Add(temp20);
        temp19.Bindings.Add(temp_eb2);
        temp20.SourceLineNumber = 26;
        temp20.SourceFileName = "MainView.ux";
        temp20.Handler += temp_eb2.OnEvent;
        temp2.SourceLineNumber = 26;
        temp2.SourceFileName = "MainView.ux";
        temp21.Alignment = Fuse.Elements.Alignment.Default;
        temp21.SourceLineNumber = 30;
        temp21.SourceFileName = "MainView.ux";
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp23);
        temp22.Value = "장부";
        temp22.FontSize = 10f;
        temp22.TextColor = float4(0.5882353f, 0.6039216f, 0.5921569f, 1f);
        temp22.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp22.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp22.SourceLineNumber = 31;
        temp22.SourceFileName = "MainView.ux";
        temp23.SourceLineNumber = 32;
        temp23.SourceFileName = "MainView.ux";
        temp23.Actions.Add(temp24);
        temp23.Bindings.Add(temp_eb3);
        temp24.SourceLineNumber = 33;
        temp24.SourceFileName = "MainView.ux";
        temp24.Handler += temp_eb3.OnEvent;
        temp3.SourceLineNumber = 33;
        temp3.SourceFileName = "MainView.ux";
        temp25.DefaultPath = "home";
        temp25.SourceLineNumber = 41;
        temp25.SourceFileName = "MainView.ux";
        temp25.Templates.Add(home);
        temp25.Templates.Add(boardMain);
        temp25.Templates.Add(schedule);
        temp25.Templates.Add(accountBook);
        temp25.Templates.Add(income);
        temp25.Templates.Add(expense);
        temp25.Templates.Add(addPage);
        temp25.Templates.Add(boardMain1);
        temp25.Templates.Add(write);
        temp25.Templates.Add(detailPage);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(temp_eb3);
        this.Children.Add(router);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp25);
    }
    static global::Uno.UX.Selector __selector0 = "router";
}
