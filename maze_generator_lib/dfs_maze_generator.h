#ifndef DFS_MAZE_GENERATOR_H
#define DFS_MAZE_GENERATOR_H

#include <boost/optional.hpp>

#include <set>

#include "maze_generator_interface.h"
#include "maze_generator_lib_global.h"
#include "wall_position_t.h"

class maze;

class dfs_maze_generator : public maze_generator_interface
{
public:

    dfs_maze_generator();

    std::auto_ptr<maze> generate(unsigned int width,
                                 unsigned int height,
                                 const wall_position_t &entrance,
                                 const wall_position_t &exit);

    std::string name()const;

private:
    class distance_comparator {
    public:
        //distance_comparator() {}
        distance_comparator(const location_t rl) : rl_(rl) {}

        bool operator () (const location_t &lhs, const location_t &rhs) const {
            return (lhs.distance(rl_) < rhs.distance(rl_));
        }
    private:
        location_t rl_;
    };

    typedef std::set<location_t> visited_type;

    void random_dfs(maze *m, location_t &entrance);
    boost::optional<location_t> next_unvisited(const maze*) const;

    wall_position_t entrance_;
    wall_position_t exit_;
    maze* m_;

    visited_type visited_cells_;
};


#endif // DFS_MAZE_GENERATOR_H
