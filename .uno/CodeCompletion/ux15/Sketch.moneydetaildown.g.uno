namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class moneydetaildown: Fuse.Controls.Panel
    {
        static moneydetaildown()
        {
        }
        [global::Uno.UX.UXConstructor]
        public moneydetaildown()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Panel();
            var temp2 = new global::Fuse.Controls.Path();
            var temp3 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(12f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(8f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.moneydetaildown.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.moneydetaildown.ux";
            temp.Children.Add(temp1);
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(93.75f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.moneydetaildown.ux";
            temp1.Children.Add(temp2);
            temp2.Data = "M 0.8833333333333 0 L 0.5 0.6266666666667 L 0.1166666666667 0 L 0 0.1866666666667 L 0.5 1 L 1 0.1866666666667 L 0.8833333333333 0";
            temp2.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.moneydetaildown.ux";
            temp2.Fills.Add(temp3);
            temp3.Color = float4(0.2902216f, 0.2901753f, 0.2902375f, 1f);
            this.Children.Add(temp);
        }
    }
}
