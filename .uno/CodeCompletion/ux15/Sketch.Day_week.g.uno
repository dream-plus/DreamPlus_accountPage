namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Day_week: Fuse.Controls.Panel
    {
        string _field_fri;
        [global::Uno.UX.UXOriginSetter("Setfri")]
        public string fri
        {
            get { return _field_fri; }
            set { Setfri(value, null); }
        }
        public void Setfri(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_fri)
            {
                _field_fri = value;
                OnPropertyChanged("fri", origin);
            }
        }
        string _field_thu;
        [global::Uno.UX.UXOriginSetter("Setthu")]
        public string thu
        {
            get { return _field_thu; }
            set { Setthu(value, null); }
        }
        public void Setthu(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_thu)
            {
                _field_thu = value;
                OnPropertyChanged("thu", origin);
            }
        }
        string _field_wen;
        [global::Uno.UX.UXOriginSetter("Setwen")]
        public string wen
        {
            get { return _field_wen; }
            set { Setwen(value, null); }
        }
        public void Setwen(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_wen)
            {
                _field_wen = value;
                OnPropertyChanged("wen", origin);
            }
        }
        string _field_tue;
        [global::Uno.UX.UXOriginSetter("Settue")]
        public string tue
        {
            get { return _field_tue; }
            set { Settue(value, null); }
        }
        public void Settue(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_tue)
            {
                _field_tue = value;
                OnPropertyChanged("tue", origin);
            }
        }
        string _field_mon;
        [global::Uno.UX.UXOriginSetter("Setmon")]
        public string mon
        {
            get { return _field_mon; }
            set { Setmon(value, null); }
        }
        public void Setmon(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_mon)
            {
                _field_mon = value;
                OnPropertyChanged("mon", origin);
            }
        }
        string _field_sat;
        [global::Uno.UX.UXOriginSetter("Setsat")]
        public string sat
        {
            get { return _field_sat; }
            set { Setsat(value, null); }
        }
        public void Setsat(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_sat)
            {
                _field_sat = value;
                OnPropertyChanged("sat", origin);
            }
        }
        string _field_sun;
        [global::Uno.UX.UXOriginSetter("Setsun")]
        public string sun
        {
            get { return _field_sun; }
            set { Setsun(value, null); }
        }
        public void Setsun(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_sun)
            {
                _field_sun = value;
                OnPropertyChanged("sun", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        global::Uno.UX.Property<string> temp4_Value_inst;
        global::Uno.UX.Property<string> temp5_Value_inst;
        global::Uno.UX.Property<string> temp6_Value_inst;
        static Day_week()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Day_week()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp7 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp8 = new global::Fuse.Reactive.Property(temp7, accountBook_accessor_Sketch_Day_week_fri.Singleton);
            var temp9 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp10 = new global::Fuse.Reactive.Property(temp9, accountBook_accessor_Sketch_Day_week_thu.Singleton);
            var temp11 = new global::Fuse.Reactive.Constant(this);
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp12 = new global::Fuse.Reactive.Property(temp11, accountBook_accessor_Sketch_Day_week_wen.Singleton);
            var temp13 = new global::Fuse.Reactive.Constant(this);
            var temp3 = new global::Fuse.Controls.Text();
            temp3_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp3, __selector0);
            var temp14 = new global::Fuse.Reactive.Property(temp13, accountBook_accessor_Sketch_Day_week_tue.Singleton);
            var temp15 = new global::Fuse.Reactive.Constant(this);
            var temp4 = new global::Fuse.Controls.Text();
            temp4_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp4, __selector0);
            var temp16 = new global::Fuse.Reactive.Property(temp15, accountBook_accessor_Sketch_Day_week_mon.Singleton);
            var temp17 = new global::Fuse.Reactive.Constant(this);
            var temp5 = new global::Fuse.Controls.Text();
            temp5_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp5, __selector0);
            var temp18 = new global::Fuse.Reactive.Property(temp17, accountBook_accessor_Sketch_Day_week_sat.Singleton);
            var temp19 = new global::Fuse.Reactive.Constant(this);
            var temp6 = new global::Fuse.Controls.Text();
            temp6_Value_inst = new accountBook_FuseControlsTextControl_Value_Property(temp6, __selector0);
            var temp20 = new global::Fuse.Reactive.Property(temp19, accountBook_accessor_Sketch_Day_week_sun.Singleton);
            var temp21 = new global::Fuse.Controls.Panel();
            var temp22 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
            var temp23 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
            var temp24 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
            var temp25 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
            var temp26 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp16, Fuse.Reactive.BindingMode.Default);
            var temp27 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp18, Fuse.Reactive.BindingMode.Default);
            var temp28 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp20, Fuse.Reactive.BindingMode.Default);
            this.fri = "금";
            this.thu = "목";
            this.wen = "수";
            this.tue = "화";
            this.mon = "월";
            this.sat = "토";
            this.sun = "일";
            this.Width = new Uno.UX.Size(307f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(16f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp21.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp21.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp21.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp21.Margin = float4(0f, 0f, 0f, 0f);
            temp21.SourceLineNumber = 9;
            temp21.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp21.Children.Add(temp);
            temp21.Children.Add(temp1);
            temp21.Children.Add(temp2);
            temp21.Children.Add(temp3);
            temp21.Children.Add(temp4);
            temp21.Children.Add(temp5);
            temp21.Children.Add(temp6);
            temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp.FontSize = 14f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp.Color = float4(0.2902216f, 0.2901753f, 0.2902375f, 1f);
            temp.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.Offset = new Uno.UX.Size2(new Uno.UX.Size(79.80456f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
            temp.SourceLineNumber = 12;
            temp.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp.Bindings.Add(temp22);
            temp8.SourceLineNumber = 12;
            temp8.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp7.SourceLineNumber = 12;
            temp7.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.FontSize = 14f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp1.Color = float4(0.2902216f, 0.2901753f, 0.2902375f, 1f);
            temp1.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp1.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.Offset = new Uno.UX.Size2(new Uno.UX.Size(63.84365f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
            temp1.SourceLineNumber = 15;
            temp1.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp1.Bindings.Add(temp23);
            temp10.SourceLineNumber = 15;
            temp10.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp9.SourceLineNumber = 15;
            temp9.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp2.FontSize = 14f;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp2.Color = float4(0.2902216f, 0.2901753f, 0.2902375f, 1f);
            temp2.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp2.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            temp2.Offset = new Uno.UX.Size2(new Uno.UX.Size(47.88274f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
            temp2.SourceLineNumber = 18;
            temp2.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp2.Bindings.Add(temp24);
            temp12.SourceLineNumber = 18;
            temp12.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp11.SourceLineNumber = 18;
            temp11.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp3.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp3.FontSize = 14f;
            temp3.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp3.Color = float4(0.2902216f, 0.2901753f, 0.2902375f, 1f);
            temp3.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp3.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp3.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp3.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp3.Margin = float4(0f, 0f, 0f, 0f);
            temp3.Offset = new Uno.UX.Size2(new Uno.UX.Size(31.92182f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
            temp3.SourceLineNumber = 21;
            temp3.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp3.Bindings.Add(temp25);
            temp14.SourceLineNumber = 21;
            temp14.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp13.SourceLineNumber = 21;
            temp13.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp4.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp4.FontSize = 14f;
            temp4.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp4.Color = float4(0.2902216f, 0.2901753f, 0.2902375f, 1f);
            temp4.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp4.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp4.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp4.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp4.Margin = float4(0f, 0f, 0f, 0f);
            temp4.Offset = new Uno.UX.Size2(new Uno.UX.Size(15.96091f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
            temp4.SourceLineNumber = 24;
            temp4.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp4.Bindings.Add(temp26);
            temp16.SourceLineNumber = 24;
            temp16.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp15.SourceLineNumber = 24;
            temp15.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp5.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp5.FontSize = 14f;
            temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp5.Color = float4(0.05490196f, 0.4392157f, 0.6509804f, 1f);
            temp5.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp5.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp5.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp5.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp5.Margin = float4(0f, 0f, 0f, 0f);
            temp5.Offset = new Uno.UX.Size2(new Uno.UX.Size(95.76547f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified));
            temp5.SourceLineNumber = 27;
            temp5.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp5.Bindings.Add(temp27);
            temp18.SourceLineNumber = 27;
            temp18.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp17.SourceLineNumber = 27;
            temp17.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp6.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp6.FontSize = 14f;
            temp6.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp6.Color = float4(0.9764706f, 0.2f, 0.3960784f, 1f);
            temp6.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp6.Width = new Uno.UX.Size(4.234528f, Uno.UX.Unit.Percent);
            temp6.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp6.Alignment = Fuse.Elements.Alignment.BottomLeft;
            temp6.Margin = float4(0f, 0f, 0f, 0f);
            temp6.SourceLineNumber = 30;
            temp6.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp6.Bindings.Add(temp28);
            temp20.SourceLineNumber = 30;
            temp20.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            temp19.SourceLineNumber = 30;
            temp19.SourceFileName = "SketchSymbols/Sketch.Day_week.ux";
            this.Children.Add(temp21);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
