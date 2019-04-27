namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class moneylist: Fuse.Controls.Panel
    {
        static moneylist()
        {
        }
        [global::Uno.UX.UXConstructor]
        public moneylist()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Image();
            this.Width = new Uno.UX.Size(19f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(19f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.moneylist.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.moneylist.ux";
            temp.File = new global::Uno.UX.BundleFileSource(import("../../../SketchSymbols/images/39d39d2b7b56651290848862ff9ab610d45955d0.png"));
            this.Children.Add(temp);
        }
    }
}
