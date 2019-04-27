namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Check: Fuse.Controls.Panel
    {
        static Check()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Check()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Image();
            this.Width = new Uno.UX.Size(23f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(24f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Check.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Check.ux";
            temp.File = new global::Uno.UX.BundleFileSource(import("../../../SketchSymbols/images/607e74a706af7a74f6f9a7697e821832d2f75315.png"));
            this.Children.Add(temp);
        }
    }
}
