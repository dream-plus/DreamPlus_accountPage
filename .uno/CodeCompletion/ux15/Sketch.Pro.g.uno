namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Pro: Fuse.Controls.Panel
    {
        static Pro()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Pro()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Panel();
            var temp2 = new global::Fuse.Controls.Path();
            var temp3 = new global::Fuse.Controls.Shadow();
            var temp4 = new global::Fuse.Drawing.Stroke();
            var temp5 = new global::Fuse.Drawing.SolidColor();
            var temp6 = new global::Fuse.Controls.Panel();
            this.Width = new Uno.UX.Size(27f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(27f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Pro.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Pro.ux";
            temp.Children.Add(temp1);
            temp.Children.Add(temp6);
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.Pro.ux";
            temp1.Children.Add(temp2);
            temp2.Data = "M 0.5 1 C 0.7761423749 1 1 0.7761423749 1 0.5 C 1 0.2238576251 0.7761423749 0 0.5 0 C 0.2238576251 0 0 0.2238576251 0 0.5 C 0 0.7761423749 0.2238576251 1 0.5 1";
            temp2.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.Pro.ux";
            temp2.Strokes.Add(temp4);
            temp2.Children.Add(temp3);
            temp3.Mode = Fuse.Controls.Shadow.ShadowMode.PerPixel;
            temp3.Angle = 90f;
            temp3.Distance = 2f;
            temp3.Size = 3f;
            temp3.Color = float4(0.6569409f, 0.6430213f, 0.6430213f, 0.5f);
            temp3.SourceLineNumber = 8;
            temp3.SourceFileName = "SketchSymbols/Sketch.Pro.ux";
            temp4.Width = 0.5f;
            temp4.Alignment = Fuse.Drawing.StrokeAlignment.Center;
            temp4.Brush = temp5;
            temp5.Color = float4(0.1019608f, 0.5137255f, 0.6941177f, 1f);
            temp6.Width = new Uno.UX.Size(91.17647f, Uno.UX.Unit.Percent);
            temp6.Height = new Uno.UX.Size(91.17647f, Uno.UX.Unit.Percent);
            temp6.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp6.Margin = float4(0f, 0f, 0f, 0f);
            temp6.Offset = new Uno.UX.Size2(new Uno.UX.Size(4.705883f, Uno.UX.Unit.Percent), new Uno.UX.Size(4.117647f, Uno.UX.Unit.Percent));
            temp6.SourceLineNumber = 15;
            temp6.SourceFileName = "SketchSymbols/Sketch.Pro.ux";
            this.Children.Add(temp);
        }
    }
}
