class SceneNode
{
    public:
        typedef std::unique_ptr<SceneNode> Ptr;

    public:
        SceneNode();

    private:
        std::vector<Ptr> mChildren;
        SceneNode* mParent;
};
