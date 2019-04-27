namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Bar: Fuse.Controls.Panel
    {
        static Bar()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Bar()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Path();
            var temp2 = new global::Fuse.Drawing.Stroke();
            var temp3 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(121f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Bar.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Bar.ux";
            temp.Children.Add(temp1);
            temp1.Data = "M 0.004132231404959 0.5 L 0.995867768595 0.5";
            temp1.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.Bar.ux";
            temp1.Strokes.Add(temp2);
            temp2.Width = 1f;
            temp2.Alignment = Fuse.Drawing.StrokeAlignment.Center;
            temp2.Brush = temp3;
            temp3.Color = float4(0.8267698f, 0.8162329f, 0.8162329f, 1f);
            this.Children.Add(temp);
        }
    }
}
