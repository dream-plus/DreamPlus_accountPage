namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Bottom_bar: Fuse.Controls.Panel
    {
        static Bottom_bar()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Bottom_bar()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Path();
            var temp2 = new global::Fuse.Controls.Shadow();
            var temp3 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(375f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(86f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Bottom_bar.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Bottom_bar.ux";
            temp.Children.Add(temp1);
            temp1.Data = "M 1.505387152034E-17 6.383856699346E-16 L 1 6.383856699346E-16 L 1 1 L 0.6422082200444 1 L 0.3637815864015 1 L 1.505387152034E-17 1 L 1.505387152034E-17 6.383856699346E-16";
            temp1.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.Bottom_bar.ux";
            temp1.Fills.Add(temp3);
            temp1.Children.Add(temp2);
            temp2.Mode = Fuse.Controls.Shadow.ShadowMode.PerPixel;
            temp2.Angle = -90f;
            temp2.Distance = 2f;
            temp2.Size = 4f;
            temp2.Color = float4(0f, 0f, 0f, 0.1f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.Bottom_bar.ux";
            temp3.Color = float4(1f, 1f, 1f, 1f);
            this.Children.Add(temp);
        }
    }
}
