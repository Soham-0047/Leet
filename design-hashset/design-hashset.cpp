// Design HashSet | Easy
// https://leetcode.com/problems/design-hashset/
// Solved: 2026-06-18
//
class MyHashSet {
private:
    vector<bool>v;
public:
    MyHashSet() {
        v.resize(1000001, false);
    }
    
    void add(int key) {
        v[key] = true;
    }
    
    void remove(int key) {
        v[key] = false;
    }
    
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */