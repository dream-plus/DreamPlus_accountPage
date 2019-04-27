namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Facebook: Fuse.Controls.Panel
    {
        static Facebook()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Facebook()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Image();
            this.Width = new Uno.UX.Size(34f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(34f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Facebook.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Facebook.ux";
            temp.File = new global::Uno.UX.BundleFileSource(import("../../../SketchSymbols/images/23ce7661424fc4bbee2ed027ea2a01d7ac47bf36.png"));
            this.Children.Add(temp);
        }
    }
}
