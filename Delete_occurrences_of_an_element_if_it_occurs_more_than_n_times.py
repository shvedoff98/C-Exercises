def delete_nth(order,max_e):
    new_list = []
    for y in order:
        if new_list.count(y)<max_e:
            new_list.append(y)
            
    return new_list
