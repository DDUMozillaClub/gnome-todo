/* gtd-task-list-eds.h
 *
 * Copyright (C) 2015 Georges Basile Stavracas Neto <georges.stavracas@gmail.com>
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTD_TASK_LIST_EDS_H
#define GTD_TASK_LIST_EDS_H

#include "gnome-todo.h"

#include <glib-object.h>
#include <libecal/libecal.h>

G_BEGIN_DECLS

#define GTD_TYPE_TASK_LIST_EDS (gtd_task_list_eds_get_type())

G_DECLARE_FINAL_TYPE (GtdTaskListEds, gtd_task_list_eds, GTD, TASK_LIST_EDS, GtdTaskList)

GtdTaskListEds*      gtd_task_list_eds_new                       (GtdProvider        *provider,
                                                                  ESource            *source,
                                                                  ECalClient         *client);

ESource*             gtd_task_list_eds_get_source                (GtdTaskListEds     *list);

void                 gtd_task_list_eds_set_source                (GtdTaskListEds     *list,
                                                                  ESource            *source);

ECalClient*          gtd_task_list_eds_get_client                (GtdTaskListEds     *self);

G_END_DECLS

#endif /* GTD_TASK_LIST_EDS_H */
