/*
 * Ternary Search Tree abstraction
 * Ref: https://en.wikipedia.org/wiki/Ternary_search_tree
 *
 * Author: Samuel Schlesinger <sgschlesinger@gmail.com>
 * Copyright (C) 2015 by Samuel Schlesinger <sgschlesinger@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with dslib.  If not, see <http://www.gnu.org/licenses/>.
 */


/* A tst node structure */
typedef struct tst {
    struct tst *left;
    char c;
    void* obj;
    struct tst *down;
    struct tst *right;
} tst_t, *tst_p, **tst_pp;

/* initializes an empty tst */
tst_pp init_tst(void);

/* inserts the (key, obj) pair into the tst */
int insert_tst(tst_pp head, char* key, void* obj);

/* looks up the obj corresponding to the key in the tst rooted at head */
void* lookup_tst(tst_pp head, char* key);
