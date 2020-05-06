```c++
class LRUCache {
private:
    int cap;
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int, int>>::iterator> map;
public:
    LRUCache(int capacity) {
        this->cap = capacity;
    }
    
    int get(int key) {
        auto it = map.find(key);
        if (it == map.end()) return -1;
        pair<int, int>kv = *map[key];
        cache.erase(map[key]);
        cache.push_front(kv);
        map[key] = cache.begin();
        return kv.second;
    }
    
    void put(int key, int value) {
        auto it = map.find(key);
        if (it == map.end()) {
            if (cache.size() == cap) {
                auto lastPair = cache.back();
                int lastKey = lastPair.first;
                map.erase(lastKey);
                cache.pop_back();
            } 
            cache.push_front(make_pair(key, value));
            map[key] = cache.begin();
        } else {
            cache.erase(map[key]);
            cache.push_front(make_pair(key, value));
            map[key] = cache.begin();
        }
    }
};
```

