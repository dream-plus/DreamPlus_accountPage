namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class input2: Fuse.Controls.Panel
    {
        static input2()
        {
        }
        [global::Uno.UX.UXConstructor]
        public input2()
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
            this.Width = new Uno.UX.Size(251f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(16f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.input2.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(93.75f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.Offset = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Percent), new Uno.UX.Size(6.25f, Uno.UX.Unit.Percent));
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.input2.ux";
            temp.Children.Add(temp1);
            temp1.Width = new Uno.UX.Size(64.54183f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.Offset = new Uno.UX.Size2(new Uno.UX.Size(35.45817f, Uno.UX.Unit.Percent), new Uno.UX.Size(80f, Uno.UX.Unit.Percent));
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.input2.ux";
            temp1.Children.Add(temp2);
            temp2.Data = "M 0.003086419753086 0.5 L 0.9969135802469 0.5";
            temp2.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.input2.ux";
            temp2.Strokes.Add(temp4);
            temp2.Children.Add(temp3);
            temp3.Mode = Fuse.Controls.Shadow.ShadowMode.PerPixel;
            temp3.Angle = 116.565f;
            temp3.Distance = 2.236068f;
            temp3.Size = 3f;
            temp3.Color = float4(0.5790817f, 0.5245757f, 0.5245757f, 0.5f);
            temp3.SourceLineNumber = 8;
            temp3.SourceFileName = "SketchSymbols/Sketch.input2.ux";
            temp4.Width = 1f;
            temp4.Alignment = Fuse.Drawing.StrokeAlignment.Center;
            temp4.Brush = temp5;
            temp5.Color = float4(0.592f, 0.592f, 0.592f, 1f);
            this.Children.Add(temp);
        }
    }
}
