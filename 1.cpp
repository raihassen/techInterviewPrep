/*
A company's organizational structure is represented as 
1: 2, 3, 4 
In the above employees with id 2, 3 and 4 report to 1 
Assume the following hierarchy. 
1: 2, 3, 4 
3: 5, 6, 7 
5: 8, 9, 10 
Given an employee Id, return all the employees reporting to him directly or indirectly
*/
// assume that id is int
// assume that info will be provided as vector of vectors
vector<int> reportingEmployers(unordered_map<int, vector<int> > info, int id){ 
	map<int, bool> visited;
	visited[id] = true;
	vector<int> result;
	result.push_back(id);
	int i = 0;
	while(i<result.size()){
		for (int j=0; j<map[result[i].size(); j++]){
			if (visited[map[result[i]][j]] == false){
				visited[map[result[i]][j]] = true;
				result.push_back(map[result[i]][j]);
			}
		}
		i++;
	}
	result.pop_front();
	return result;
}
